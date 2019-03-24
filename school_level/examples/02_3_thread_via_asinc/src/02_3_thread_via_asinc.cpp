// Kill me now! I use Python-like formating (O.Reshta)
// Хотел посмотреть, насколько сбалансированы потоки созданные thread, async и main.
// хорошо. Только на 999 и 9999 иногда возникает расхождение в несколько единиц.

#include <iostream>
#include <future>
#include <thread>
#include <chrono>
#include <vector>
//#include <memory>
#include <mutex>

using namespace std;

mutex gM;
vector<int> gV;

bool registration(int id){

	{lock_guard<mutex> lck(gM);
		if(gV.size() == gV.capacity()){
			return false;}
		gV.push_back(id);}

	this_thread::sleep_for(1ms);

	return true;}

int main(){

	gV.reserve(99);

	//thread 0 (thread)
    auto sr = thread([](){
    	while(registration(0))
    		{}
    	return 1;});

    //thread 1 (async)
    auto asn = async(launch::async,[](){
    	while(registration(1))
    		{}
    	return 1;});

    //thread 2 (main)
	while(registration(2))
		{}

    (void) asn.get();
    sr.join();

    //results output
    //for(auto i: gV)
	//	cout << i;

	vector<int> vcount = {0,0,0};
    for(auto i: gV)
    	vcount[i]++;

    cout << "\nTimes for async = " << vcount[0]
	     << ", for thread = " << vcount[1]
		 << ", for main =" << vcount[2] << endl; }
