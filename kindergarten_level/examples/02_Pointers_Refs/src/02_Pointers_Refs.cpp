#include <iostream>
using namespace std;

void my_swap_bad(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void my_swap_good(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void my_swap_other(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main() {
	int a = 3, b = 4;

	cout << "Bad attempt using variables." << endl;
	cout << "a & b before swapping try: " << a << "," << b << endl;
	my_swap_bad(a,b);
	cout << "a & b after swapping try: " << a << "," << b << endl;

	cout << "\nGood attempt using references." << endl;
	cout << "a & b before swapping try: " << a << "," << b << endl;
	my_swap_good(a,b);
	cout << "a & b after swapping try: " << a << "," << b << endl;

	cout << "\nGood attempt using pointers." << endl;
	cout << "a & b before swapping try: " << a << "," << b << endl;
	my_swap_other(&a,&b);
	cout << "a & b after swapping try: " << a << "," << b << endl;
	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Please write a program that:
    1. Initiates some vector by some integer values.
    2. Includes 2 functions:
    	a) for output a vector content
    	b) for swapping  neighbors even and odd elements (example 1,2,3,4 => 2,1,4,3)
    	   the function returns true, if replacing all elements is possible (even number of elements)
    	   and false if the last element can not be swapped (odd number of elements)
   	3. Outputs vector content before and after swapping.
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
