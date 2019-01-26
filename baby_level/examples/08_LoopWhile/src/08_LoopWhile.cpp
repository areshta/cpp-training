#include <iostream>
using namespace std;

int main() {
	int n = 500;
	int i = 1;
	while(n>0)
	{
		cout << "Step: " << i << "; n = " << n << endl;
		n /= 2;
		i++;
	}
	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Write a program that
        1. inputs numbers
        2. calculate sum of them
        3. Output result and exit after enter of zero
        4. use "break" for exit from while loop
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
