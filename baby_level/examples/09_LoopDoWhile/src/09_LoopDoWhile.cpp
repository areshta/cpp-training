#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main() {

	std::mt19937 gen(time(0));
    std::uniform_int_distribution<> uid(0, 3);
    std::cout << "Guess number play: \n";

    int my = -1;
	int your = -1;

	do{
		my = uid(gen);
		cout << "I got some number from 0 to 3. Try to guess it!\nEnter number:" << endl;
		cin >> your;
		cout << "My is " << my << ";   your is " << your << endl;

	} while(my!=your);

	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Write a program that do the same as in previous example
        1. inputs numbers
        2. calculate sum of them
        3. Output result and exit after enter of zero
        4. use condition inside while for exit from while loop
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
