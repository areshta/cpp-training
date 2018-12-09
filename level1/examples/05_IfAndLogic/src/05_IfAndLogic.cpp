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
