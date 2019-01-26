#include <iostream>
using namespace std;

int main() {
	enum class ESeasons {spring, summer, autumn, winter};

	ESeasons ssnow = ESeasons::winter;

	ssnow = static_cast<ESeasons>(4);

	cout << "Now is ";
	switch(ssnow)
	{
	case ESeasons::spring:
		cout << "Spring" << endl;
		break;
	case ESeasons::summer:
		cout << "Summer" << endl;
		break;
	case ESeasons::autumn :
		cout << "Autumn" << endl;
		break;
	case ESeasons::winter :
		cout << "Winter" << endl;
		break;
	default:
		cout << "It is impossible! No chance to get here! Probably)" << endl;
	}
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Write a program that
        1. inputs month number, outputs month name for correspondent input 
           and error message for a wrong month number
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.

