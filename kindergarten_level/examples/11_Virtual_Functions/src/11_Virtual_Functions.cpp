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
