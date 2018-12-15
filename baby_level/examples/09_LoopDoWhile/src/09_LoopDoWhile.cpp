#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main() {

	std::mt19937 gen(time(0));
    std::uniform_int_distribution<> uid(0, 3);
    std::cout << "My numbers: " << uid(gen) << " " << uid(gen) << std::endl;

    int my = -1;
	int your = -1;

	do{
		my = uid(gen);
		cout << "I got some number from 1 to 3. Try guess it!\nEnter number:" << endl;
		cin >> your;
		cout << "My is " << my << ";   your is " << your << endl;

	} while(my!=your);

	return 0;
}
