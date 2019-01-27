#include <iostream>
using namespace std;

//do not put ';' in the end of definition!
#define CONST1 10
#define STR1 "const str1"

//better
const int const2 = 20;
const string str2 = "const str2";

#define MULT_BAD(x,y) x*y
#define MULT_GOOD(x,y) ((x)*(y))

//better
template<typename T>
inline T mult(const T& x, const T& y)
{
	return x*y ;
}

#define TRACE(msg) cout \
	<< "File: " << __FILE__ \
	<< "   Line: " << __LINE__ \
	<< " msg:" << msg << endl

#define def(name1, name2) name1 ## name2
#define OUTPUT(val) cout << #val << " = " << val << endl

int main() {

	cout << "Some int constants: " << CONST1 << " " << const2 << endl;
	cout << "Some str constants: " << STR1 << ", " << str2 << endl;
	cout << "MULT_BAD(1+1,2+2) = " << MULT_BAD(1+1,2+2) << endl;
	cout << "MULT_GOOD(1+1,2+2) = " << MULT_GOOD(1+1,2+2) << endl;
	cout << "mult<int>(1+1,2+2) = " << mult<int>(1+1, 2+2) << endl;

	TRACE("Some msg");

	int def(var,1) = 10;
	int def(var,2) = 20;
	cout << "var1 = " << var1 << endl;
	cout << "var2 = " << var2 << endl;

	double temperature  = 36.6;
	OUTPUT(temperature);

#ifdef WINOWS // compilation: C++ -DWINDOWS
	cout << "For Windows only" << endl;
#elif LINUX // compilation: C++ -DLINUX
	cout << "For Linux only" << endl;
#else
	cout << "Unknown OS" << endl;
#endif

#ifdef VERSION
	cout << "VERSION=" << VERSION << endl;
#endif
	return 0;
}


/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task:
    	There are some folder names as name1, name2, name3 and file name as file.txt
    	Write the program that prepare path in format .\name1\name2\name3\file.txt for Windows
    	and path in format ./name1/name2/name3/file.txt for Linux.
      	The format must be declared in compilation time as some compiler parameter.
    Optional:
    	Try output C++ standard that supports by your compiler (__cplusplus)
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
