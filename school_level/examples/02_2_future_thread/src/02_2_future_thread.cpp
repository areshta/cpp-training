// http://scrutator.me/post/2012/06/03/parallel-world-p2.aspx

#include <iostream>
#include <string>
#include <future>
#include <thread>
#include <chrono>
#include <vector>
#include <memory>
#include <mutex>

using namespace std;

class CThreadHolder
{
public:
	CThreadHolder(size_t n):mN(n){}
	size_t get_num(){return mN;}
	void exec_emul();
	static thread::id Run(CThreadHolder* pHolder);
private:
	size_t mN;
	static mutex mt;
	static mutex mNt;
};

void CThreadHolder::exec_emul()
{
	for(int i=0; i < 5; ++i){
		{
			lock_guard<mutex> lck(mNt);
			cout << "###" << mN << "\n";
			std::this_thread::sleep_for(20ms);
			cout << "@@@" << mN << "\n";
			std::this_thread::sleep_for(20ms);
		}
		std::this_thread::sleep_for(20ms);
	}
}

mutex CThreadHolder::mt;
mutex CThreadHolder::mNt;

thread::id CThreadHolder::Run(CThreadHolder* pHolder)
{
	{
		lock_guard<mutex> lck(mt);
		cout << "Started: " <<  pHolder->get_num() << "; ID:" << this_thread::get_id() << endl;
	}

	pHolder->exec_emul();

	return this_thread::get_id();
}

int main()
{
	const int sz = 10;

	vector< unique_ptr<CThreadHolder> > v;
	vector < future<std::__async_result_of<std::thread::id (&)()>> > va;

	for(size_t i=0; i<sz; i++)
	{
		v.push_back(unique_ptr<CThreadHolder> (new CThreadHolder(i)) );
		va.push_back( async( launch::async, CThreadHolder::Run, v[i].get() ) );
	}

	vector<thread::id> vid;
	for(auto& fut: va)
	{
		vid.push_back(fut.get());
	}

	cout << "\nFinish:\n" << endl;

	for(auto& id: vid)
	{
		cout << "ID: " << id << endl;
	}
}
