#include <iostream>
#include <limits>
using namespace std;

int main() {

	// Variables range
	cout << "You always can investigate \n";
	cout << "int\t"
			<< numeric_limits<int>::lowest() << '\t'<< numeric_limits<int>::max() << '\n';
	cout << "float\t"
			<< numeric_limits<float>::lowest() << '\t'<< numeric_limits<float>::max() << '\n';
	cout << "double\t"
			<< numeric_limits<double>::lowest() << '\t'	<< numeric_limits<double>::max() << '\n';

	//size of
	cout << "\nDo not use int! It takes "<< sizeof(int)<< " bytes for your platform only!" << endl;
	cout << "\nUse defined size int, as int8_t, it has " << sizeof(int8_t) << " bytes always!" << endl;

	cout << "\n\nUse for the for loop variable size_t instead int. It has actual range of array size for your system! ";
	cout << "size_t range: "
			<< numeric_limits<size_t>::lowest() << " : "	<< numeric_limits<size_t>::max() << '\n';
	cout << "for my system it is the same uint64_t range: "
			<< numeric_limits<uint64_t>::lowest() << " : "	<< numeric_limits<size_t>::max() << '\n';

	//overflow issue
	int8_t a = 100, b=100;
	int8_t c = a+b;
	cout << "\n100 + 100 = " << static_cast<int>(c) << " ?!!!   :-(" << endl;
	int16_t d = a + b;
	cout << "100 + 100 = " << d  << " OK!" << endl;

	cout << "numeric_limits<int>::max()+1 = " << numeric_limits<int>::max()+1 << endl;
	cout << "numeric_limits<unsigned int>::max()+1 = " << numeric_limits<unsigned int>::max()+1  << endl;

	int16_t aa = 1024;
	int8_t bb = aa;
	cout << "\nTruncation: " << static_cast<int>(bb) << endl;
	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Try calculate
    	c = (a * b) / (d * e)
    	where a, b, c, d, e are int type.
		a = 2000000000; b = 2000000000; d = 2000000; e = 2000000;
		Do we have correct result?
		If not, how change the formula without changing variables type for getting right answer?
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
