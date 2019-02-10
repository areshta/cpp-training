#include <iostream>
#include <thread>
#include <memory>
#include <vector>
#include <chrono>
#include <mutex>

using namespace std;

mutex g_lock;

void run(int num, int steps)
{

	for(int i=0; i<steps; i++){
		{
			unique_lock<mutex> locker(g_lock);
			cout << "thread num:" << num << "    step:"<< i << endl;
		}
		this_thread::sleep_for(200ms); // 200ms for c++14 and later
	}
}

int main() {
	vector< unique_ptr<thread> > vthreads;

	for(int i=1; i<11; i++)
	{
		vthreads.push_back( unique_ptr<thread>(new thread(run,i,11-i)) );
	}

	for(auto& th: vthreads){
		th->join();
	}

	return 0;
}

