
#include <iostream>
using namespace std;

template<typename T>
T summ(const T& a1, const T& a2)
{
	return a1+a2;
}


int main() {

	cout << summ(2,3) << endl;
	cout << summ(string("I am "), string("a good boy!")) << endl;

	return 0;
}


/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task:
    	Create template function "last" that returns position of
    	the last element of vector of any elements type.
    	Write a program that demonstrate its work
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
