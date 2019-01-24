#include <iostream>
#include <string>

int main() {

	// The good practice for big projects:
	// we did not open std namespace
	// and use :: operator for access it

	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name ;
	std::cout << "You entered: " << name << std::endl;
	std::cin.ignore(); // remove end of line symbol

	std::string line;
	std::cout << "Enter your first and second name: ";
	std::getline(std::cin, line);
	std::cout << "You entered: " << line << std::endl;

	return 0;
}

/*
    Task: Create summator.
        It have to 
        1. gets two numbers 
        2. outputs the sum of them
*/
