#include <iostream>
#include <vector>

using namespace std;

class Pet
{
public:
	virtual void voice() = 0 ;
	virtual ~Pet() {}
};

class Dog: public Pet
{
public:
	virtual void voice() override {cout << "Woof! Woof!\n";}
	virtual ~Dog() {}
};

class Cat: public Pet
{
public:
	virtual void voice() override {cout << "Meow! Meow!\n";}
	virtual ~Cat() {}
};

int main() {
	vector<Pet*> pets;

	pets.push_back(new Dog());
	pets.push_back(new Dog());
	pets.push_back(new Cat());
	pets.push_back(new Cat());
	pets.push_back(new Dog());

	for(auto p: pets){
		p->voice();
	}

	for(auto p: pets){
		delete p;
	}

	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task "Herarhy-4": Get previous project ("Herarhy-3")
    1) add other child class
    2) add some virtual function in the parent and children classes
    3) create array of pointers of the parent class type that point children objects
    4) call virtual functions in some loop
    5) free objects memory

*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
