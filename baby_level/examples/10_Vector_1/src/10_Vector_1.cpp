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

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Write a program that
        1. initiates vector by some integer negative and positive numbers
        2. calculates sum of negative numbers
        3. replaces all negative numbers by there absolute velues
        4. outputs results
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
