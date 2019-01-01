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
