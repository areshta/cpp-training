#include <iostream>
#include <future>
#include <system_error>


using namespace std;

int main() {

	auto fu_res = async(launch::async,[](){
						while(true){
							cout << "async fun" << endl;
							future_error fe;
							throw fe;}
					} );
	try{
		fu_res.get();}
	catch(future_error& fe){
		cout << "Error code = " << fe.code();}

	return 0;
}
