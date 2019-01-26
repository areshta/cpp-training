#include <iostream>
#include <cmath>

//What kinetic energy has a car that moves with speed 52 km/h and has mass of 1820 kg?

using namespace std;

int main() {

	double v = 52. * 1000 / (60*60); // km/h => m/s
	double m = 1820.;
	double e = 0.;

	e = m*pow(v,2);

	cout << "Energy = "<< e << " J" << endl;
	return 0;
}


/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Write a program that
        1. calculates number of seconds in 2019 year
        2. calculates number of bytes in 1MB
        3. calculates weight of 1 liter of gold
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.

