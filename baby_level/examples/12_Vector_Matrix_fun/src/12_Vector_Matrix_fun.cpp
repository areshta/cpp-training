#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void out_matrix(vector< vector<int> > m)
{
	for(size_t i=0; i < m.size();++i){
		for(size_t j=0; j< m[i].size(); ++j){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

//using of reference is mandatory here
void transp_matrix(vector< vector<int> >& m)
{
	for(size_t i=0; i < m.size();++i){
		for(size_t j=i+1; j< m[i].size(); ++j){
			swap(m[i][j], m[j][i]);
		}
	}
}

int main() {

	vector< vector<int> > matrix { {11,12,13}, {21,22,23}, {31,32,33} };

	cout << "matrix:" << endl;
	out_matrix(matrix);

	transp_matrix(matrix);

	cout << "\ntransposed matrix :" << endl;
	out_matrix(matrix);

	return 0;
}


/*
    Task: Copy this example as template
        1. change init numbers by some positive and negative values
        2. remove transp_matrix
        3. add min_matrix function
        3. find minimum element in the matrix using this function
        4. output results
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
