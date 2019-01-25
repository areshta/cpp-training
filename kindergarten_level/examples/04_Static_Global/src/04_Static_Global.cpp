#include <iostream>
#include "some_def.h"
using namespace std;

void f()
{
	static size_t counter = 1;
	cout << "Calling counter of f(): " << counter++ << endl;
}

class C
{
public:
	C() { ++mObjects; }
	static int get_value() { return mObjects; }
private:
	static int mObjects;
};

int C::mObjects = 0;

int x = 5;

int main() {
	cout << "Using of global is bad practice. glob1 = " << glob1 << endl;

	for(size_t i = 0; i<5 ; ++i){
		f();
	}

	cout << "number of objects C type = " << C::get_value() << endl;

	C c[10];
	C c1, c2, c3;

	cout << "number of objects of C type = " << C::get_value() << endl;

	int x = 7;
	{
		int x = 9;
		cout << "x inside block: " << x << endl;
		cout << "x global: " << ::x << endl;
	}
	cout << "x outside block: " << x << endl;

	return 0;
}
