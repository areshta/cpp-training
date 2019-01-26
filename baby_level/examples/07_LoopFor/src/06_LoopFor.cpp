#include <iostream>
using namespace std;

int main() {

	for(int i=0; i<10; ++i)
		cout << i << " ";

	cout << "\n\n";

	char c = 'z';
	for(int i = 0 ; ; ++i , --c )
	{
		cout << c;
		if(c=='a')
		{
			cout << endl << "Num of chars: " << i+1 << endl;
			break;
		}
	}

	cout << "\n\n";

	int i = 0;
	for(;;)
	{
		cout << i++ << " ";
		if(i < 20)
			continue;
		cout << "\nIt is time to break!" << endl;
		break;
	}

	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Write a program that
        1. counts sum of numbers from 1 to 100
        2. output all numbers 1 to 100 that is multiply by 3 (3,6,9,12...)
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
