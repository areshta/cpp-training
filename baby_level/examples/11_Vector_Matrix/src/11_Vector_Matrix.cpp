#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {

	vector< vector<int> > matrix { {11,12,13}, {21,22,23}, {31,32,33} };

	cout << "matrix:" << endl;
	for(size_t i=0; i < matrix.size();++i){
		for(size_t j=0; j< matrix[i].size(); ++j){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for(size_t i=0; i < matrix.size();++i){
		for(size_t j=i+1; j< matrix[i].size(); ++j){
			exchange(matrix[i][j], matrix[j][i]);
		}
	}

	cout << "\ntransposed matrix :" << endl;
	for(size_t i=0; i < matrix.size();++i){
		for(size_t j=0; j< matrix[i].size(); ++j){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
