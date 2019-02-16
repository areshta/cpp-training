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
			lock_guard<mutex> locker(g_lock);
			//unique_lock<mutex> locker(g_lock); //other locker
			cout << "1111 thread num:" << num <<" Thread ID:" << this_thread::get_id()<<"    step:"<< i << endl;
			this_thread::sleep_for(20ms); // for c++14 and later
			cout << "2222 thread num:" << num << endl <<endl;
		}
		this_thread::sleep_for(20ms); // 200ms for c++14 and later
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

