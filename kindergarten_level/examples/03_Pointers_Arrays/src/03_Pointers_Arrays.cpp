#include <iostream>
using namespace std;

void print_array(int *pArray, int sz)
{
	for(int i=0; i<sz; i++){
		cout << pArray[i]<<" ";
	}
}

class Cat
{
public:
	string getMeu
};

int main()
{
	const int sz = 10;
	int *pArray = nullptr;
	pArray = new int[sz];
	for(int i=0; i<sz; i++){
		pArray[i] = i+1;
	}
	print_array(pArray, sz);

	cout << "\nChanging values using other pointer.\n";
	int *pOther = pArray;
	for(int i=0; i<sz; i++){
		*pOther++ = (i+1)*2;
	}
	print_array(pArray, sz);

	delete[] pArray;
	//delete pArray - bad idea
	//delete pOther - very bad idea
}
