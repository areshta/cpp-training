#include <iostream>
#include "a.hpp"
#include "b.hpp"

using namespace std;

int main() {

	A a;
	B b;
	a.SetB(&b);
	b.SetA(&a);
	a.GetB()->Out();
	b.GetA()->Out();

	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task "Herarhy-2": Get previous project ("Herarhy-1")
     	  and break apart to files:
     	  1) heder -> for classes declaration
     	  2) cpp-1 -> for classes definition
     	  3) cpp-2 -> for classes definition
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
