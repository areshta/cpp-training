#include <iostream>
#include <future>
#include <string>
#include <fstream>
#include <iosfwd>
#include <mutex>

using namespace std;

ofstream *pOf;
mutex mt;
std::condition_variable ready;
mutex mt_ready;

void log_to_file(const string &str ){
		lock_guard<mutex> lg(mt);
			(*pOf) << str << endl;}

int main() {

	auto loger = async(launch::async,[](){
					pOf =  new ofstream("lofile.txt");
					ready.notify_all();
	    			return 1;});
	auto user1 = async(launch::async,[](){
					std::unique_lock<std::mutex> locker(mt_ready);
					ready.wait(locker);
					log_to_file("user1");
	    			return 1;});
	auto user2 = async(launch::async,[](){
					std::unique_lock<std::mutex> locker(mt_ready);
					ready.wait(locker);
					log_to_file("user2");
	    			return 1;});
	user1.get();
	user2.get();

	delete pOf;

	return 0;
}
