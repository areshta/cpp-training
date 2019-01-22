#include <iostream>
#include <string>

#include <array>
#include <vector>
#include <list>
#include <map>
#include <set>
//#include ... some more collections

using namespace std;

template <typename T>
void out(const T& coll)
{
	for(auto el: coll){
		cout << el << " ";
	}
	cout << endl;
}

int main() {

	array<int,5> ar = {1,2,3,4,5};
	out<array<int,5>>(ar);

	vector<int> v = {11,12,13,14,15};
	out<vector<int>>(v);

	list<int> l = {21,22,23,24,25};
	out<list<int>>(l);

	set<int> s =  {31,32,33,33,33,34,34,35};
	out<set<int>>(s);

	map<string, int> m = { {"Boris",18}, {"Peter",21}, {"Ann",19} };
	for(auto el: m){
		cout << el.first << ":"<< el.second << endl;
	}

	return 0;
}
