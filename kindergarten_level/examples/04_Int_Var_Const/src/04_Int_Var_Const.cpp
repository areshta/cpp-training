#include <iostream>
#include <limits>

using namespace std;

int main() {

	//size of integer and types that based on integer
	cout << "sizeof(char) = "			<< sizeof(char) << endl;
	cout << "sizeof(bool) = "			<< sizeof(bool) << endl;
	cout << "sizeof(short int) = " 		<< sizeof(short int) << endl;
	cout << "sizeof(int) = " 			<< sizeof(int) << endl;
	cout << "sizeof(long int) = "		<< sizeof(long int) << endl;
	cout << "sizeof(long long int) = "	<< sizeof(long long int) << endl; //C++11 at least 64b

	// unsigned allow increase positive numbers range in twice
	cout << "size of (unsigned int) / size of (signed int)  = "
		 << numeric_limits<unsigned int>::max() / numeric_limits<signed int>::max() << endl;

	// it is true, but bad idea.
	bool bv = 100;
	cout << static_cast<int>(bv) << endl;
	bool bvv = false; // true and false are boolean literals
	cout << "false = " << bvv << endl;

	// you can use char with arithmetic operations
	int dig = '5'-'0'; //char -> num
	cout << "dig = " << dig << endl;

	// literal constants
	uint16_t  aa = 2555U; //-2555U cause compile error
	long int  bb = 2147483647L;
	unsigned long int cc = 4294967295LU;
	unsigned long int dd = 4294967295;
	cout << aa << " " << bb << " " << cc << " " << dd << endl;

	//octal starts from 0 and does not recommended for using
	int aaa = 010;
	cout << "octal 010 =" << aaa << endl;

	//hex literal constant
	int bbb = 0xB;
	cout << "hex 0xB = " << bbb << endl;

	char ccc = 'a';
	cout << "char ccc = " << ccc << "; eq decimal = " << dec << static_cast<int>(ccc)
			<< "; eq octal = " << oct << static_cast<int>(ccc) << "; eq hex = " << hex << static_cast<int>(ccc) << endl;

	//pointer is an address in some memory, int value
	int *paaa = &aaa;
	cout << "Pointer example : " << paaa << " (traditional outputs as a hex value)." << endl;

	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Investigate float and double literal constants. Please write a program that:
    1. Outputs size of float and double
    2. Outputs minimum and maximum values for float and double.
    3. Tries initiate double variable by literal with exponential format and without it
    4. Tries assign float to int. How it will be done: by truncation or rounding?
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
