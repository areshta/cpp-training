#include <iostream>
#include <string>

using std::cout;
using std::endl;

namespace A
{
	void print() { cout << "Print from A\n"; };
}

namespace B
{
	void print() { cout << "Print from B\n"; };
}

namespace A
{
	std::string st("Some string from A");
}

namespace
{
	std::string st("unnamed namespace string. This file only");
}

namespace A
{
	namespace B
	{
		void print() { cout << "Print from B that inside A\n";}
	}
}

namespace C
{
	using namespace A::B;
	using namespace std;
}

int main()
{
	cout << "OK!" << endl;
	int i = 0;
	// cin >> i; //Compilation error
	A::print();
	B::print();
	cout << A::st << endl;
	cout << st << endl;
	A::B::print();
	C::print();
	C::cout << "Input integer: " << C::endl;
	C::cin >> i; // OK
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Create own "small" vector implementation in own namespace.
    Creating vector as "stl vector" is long task.
    So we have next restrictions:
        Your vector has 10 elements only (no dynamic allocation).
        operation[] is implemented only.
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
