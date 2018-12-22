#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v {5,2,-3, 7,0,-1,10};
	v.push_back(33);

	cout << "vector :\n";
	for(auto i:v){
		cout << i << " ";
	}

	//vector min, as example. there is a standard algorithm
	int min = v[0];
	int min_index = 0;
	for(size_t i=1; i < v.size(); ++i){
		if ( min > v[i] ){
			min = v[i];
		}
	}
	cout << "\nv min = " << min << ";  in position = " << min_index << endl;

	sort(v.begin(), v.end());

	cout << "sorting vector :\n";
	for(auto i:v){
		cout << i << " ";
	}

	return 0;
}
