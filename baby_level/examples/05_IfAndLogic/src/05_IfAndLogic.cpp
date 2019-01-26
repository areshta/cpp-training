#include <iostream>
using namespace std;

// comparing operations: <, >, =>, >=, <=, ==, !=
// logic operations: &&, ||, !

int main() {

	int temp = 0;
	cout << "Input temperature: " << endl;
	cin >> temp ;

	if( temp <= 0 )
		cout << "Water is crystal" << endl;
	else if ( temp <= 100 )
		cout << "Water is liquid" << endl;
	else
		cout << "Water is gas" << endl;


	int wind = 0;
	cout << "Input wind m/s: " << endl;
	cin >> wind ;

	if( (wind < 10) && (temp > 5) )
	{
		cout << "Boris is walking" << endl;
	}
	else
	{
		cout << "Boris as at home" << endl;
	}

	if( wind > 100 )
	{
		cout << "It is hurricane!" << endl;
	}
	//else is not mandatory

	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Write a program that
        1. inputs month number, outputs season for correct input, 
           and error message for wrong month number.
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.


