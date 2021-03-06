#include <iostream>
using namespace std;

class Me
{
public:
	string get_name(){ return "Alex"; }
};

int main()
{
	// operations with pointer
	Me *pMe = new Me();
	cout << "Using -> :" << pMe->get_name() << "\nUsing (*pointer). :" << (*pMe).get_name() << endl;
	delete pMe;

	int i[2] {};
	int* pInt = i;
	int* pInt2 = pInt;
	pInt2++;
	//example only! (type) is deprecated!
	cout << "++pInt dist in bites = " << (uint64_t)(pInt2) - (uint64_t)(pInt) << endl;

	char c[2] {};
	char* pChar = c;
	char* pChar2 = pChar;
	pChar2++;
	//example only! (type) is deprecated!
	cout << "++pInt dist in bites = " << (uint64_t)(pChar2) - (uint64_t)(pChar) << endl;

	//some arithmetic
	cout << "int/int is int. 5/4 = " << 5/4 << endl;
	cout << "remain of division 21 % 5 =" << 21 % 5 << endl;
	int a = 0;
	int b = a = 10; // '='  is operation
	cout << b << endl;
	int cc = (a = 7, b = 8); // ',' is operation
	cout << cc << endl;

	//C++ Conditional ? : Operator
	int res = 0;
	int some = 5;
	if ( some > 0 )
	{
		res = some;
	}
	else
	{
		res = -some;
	}
	// the same as in if that upper
	res = some > 0 ? some : - some;

	cout << "res = " << res << endl;

	//bit operations will be described in future

	return 0;
}


/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task1: Make some investigations
        1. Create two any functions and find difference between its pointers
        2. Declare and define two char variables and find difference between its pointers
        3. Declare and define two double variables and find difference between its pointers
    Task 2:
        1. Fill vector by some numbers, find the minimum value using "?:" operator
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
