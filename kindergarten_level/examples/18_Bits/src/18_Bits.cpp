#include <iostream>
#include <bitset>
#include <cstring>
using namespace std;

int main() {

	uint8_t bt = 0b10101010; //C++14
	cout << bt << endl;
	cout << bitset<8>(bt) << "b" << endl << endl;
	for(size_t i=0; i <8; i++)
	{
		int8_t ibt = static_cast<int8_t>(bt);
		cout << bitset<8>(bt) << "b" <<" int:"<< static_cast<int>(ibt) << endl;
		bt <<= 1;
	}

	//example - meetings in a week
	enum{
		monday 		= 0x1, //old hex style for bit constants
		tuesday 	= 0x2,
		wednesday 	= 0x4,
		thursday 	= 0x8,
		friday 		= 0x10,
		saturnday 	= 0x20,
		sunday 		= 0x40
	} ;
	uint8_t week = 0;
	uint8_t weekend = week | saturnday | sunday;
	cout << "weekend: " << bitset<8>(weekend) << "b" << endl;
	uint8_t workdays = week | monday | 	tuesday | wednesday | thursday | friday ;
	cout << "workdays: " << bitset<8>(workdays) << "b" << endl;

	// is Wednesday work day?
	if(workdays & wednesday){
		cout << "Wednesday is work day." << endl;
	}

	//example: RGB pack
	struct RGBfield {
		unsigned int R: 4;
		unsigned int G: 4;
		unsigned int B: 4;
	};

	cout << sizeof(RGBfield) << endl;
	RGBfield color;
	color.R = 8;
	color.G = 8;
	color.B = 8;

	int16_t icolor = 0;
	memcpy ( &icolor, &color, sizeof(icolor) );

	cout << bitset<12>(icolor) << "b" << endl;
	cout << "Not all so easy:" << bitset<16>(icolor) << "b" << endl;

	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: "Old style output".
     There is some digital value.
     Write a function that outputs this value in bit format.
     Restriction: using of bitset is disable.
     You could use loop and shift operations.
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
