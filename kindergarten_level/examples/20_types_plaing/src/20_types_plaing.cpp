#include <iostream>
#include <string>
#include <array>


using namespace std;

constexpr size_t sz = 2;

//syntax - 1
typedef array< array <int, sz> , sz >  matrix;
typedef int (*ifun)(void);

void fun_in_fun(ifun f)
{
	cout << "Fun ret = " << f() << endl;
}

int fun1(void) { return 5; }
int fun2(void) { return 10; }

//syntax - 2
using type_lu = long unsigned int;
using str_fun = void (*)(const char* const s);

void some_str_fun(const char* const s)
{
	cout << "Some str fun: " << s << endl;
}

//syntax - 3
#define DUBLE_TYPE float

int main() {

	matrix mt = { 	11, 12 ,
					21, 22 };

	cout << "Matrix: " << endl;
	for(auto st: mt){
		for( auto el: st){
			cout << el << " ";}
		cout << endl;}

	cout << "Functions as objects:" << endl;
	cout << "Function as parameter of function:" << endl;
	fun_in_fun(fun1);
	fun_in_fun(fun2);
	cout << "Function as element of array:" << endl;
	array<ifun,2> arf= {fun1, fun2};
	cout << arf[0]() << endl;
	cout << arf[1]() << endl;

	type_lu lu = 1234lu;
	cout << "long unsigned int: " << lu << endl;

	str_fun f = some_str_fun;
	f("Hello from str fun!");

	DUBLE_TYPE fl = 1.5;
	cout << fl << endl;

	return 0;
}
/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Create type alias for 3D matrix based on vector.
     	  Fill the matrix3 of size 2x2x2 elements by values
     	  {{111, 112}, {121, 122}}, {{211, 212}, {221, 222}}
     	  Output matrix.
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
