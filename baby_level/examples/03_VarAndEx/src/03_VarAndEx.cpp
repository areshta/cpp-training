#include <iostream>
using namespace std;

int main() 
{

	char a = '0';
	cout << "Zero char has the  ASCII hex code 0x" << hex << static_cast<int>(a) << endl;

	int b = 5;
	int c = 4;
	cout << "Result of int devision is int: 5/4 = " << b/c << endl;
	double d = b / static_cast<double>(c); // if we do not need truncation
	cout << "Devision without truncation" << c;

	unsigned int ux = static_cast<unsigned>(-1);
	cout << "Surprise! -1 as unsigned int = " << dec << ux << "  or in hex 0x" << hex << ux << endl;

	bool bl = true;
	cout << "Boolean output: \n\t true is " << bl << "\n\t false is  "<< false <<endl;
	bl = -1;
	cout << "\t new bl = " << bl << endl;

	return 0;
}


/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Make some investigations
        Try to find out by programming tricks
        1. Is char signed or unsigned in your program
        2. How many letters in the English alphabet
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.

