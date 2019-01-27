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
	//delete pOther after deleting pArray- very bad idea
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Please write a program that:
    1. Creates a dynamic array and fills it by all small chars of English alphabet a-z
    2. Enters zero after 'z' ( it can be integer 0 or symbol '\0' ) to finish the string.
    3. Outputs the array as string
    4. Frees the array memory before the program ends
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
