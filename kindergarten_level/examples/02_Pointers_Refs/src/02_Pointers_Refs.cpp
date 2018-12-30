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
