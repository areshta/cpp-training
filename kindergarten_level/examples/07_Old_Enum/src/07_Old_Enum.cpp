#include <iostream>
using namespace std;

int main()
{
	enum class Ec { spring, summer, autumn, winter };
	enum Eold { spring, summer, autumn, winter };

	cout << "enum class winter " << static_cast<int>(Ec::winter) << endl;
	cout << "old enum winter " << winter << endl;

	int w = winter; //OK
	// int ww = Ec::winter ; compiling error
	cout << "seze of Eold = " << sizeof(Eold) << endl;
	cout << "seze of Ec = " << sizeof(Ec) << endl;

	enum class Ec1: uint8_t { spring, summer, autumn, winter };
	cout << "seze of Ec1 = " << sizeof(Ec1) << endl;

	//you can set values for both: old and new
	enum values {a,b,c,d=10,e=10,f,g,h=-1};
	cout << "a,b,c,d,e,f,g,h = " << a << " " << b << " " << c << " " << d << " " << e << " "
			<< f << " " << g << " " << h << endl;
	//example of using
	enum flags
		{
			flag1 = 0x1, // binary 0001
			flag2 = 0x2, // binary 0010
			flag3 = 0x4, // binary 0100
			flag4 = 0x8, // binary 1000
			bad_value = -1
		};
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task "Traffic light Modeling". Write the program that
        1. Declares Traffic light colors "red", "yellow", "green", "blinking green" as enum.
        2. Enters number of Traffic light loops.
        3. Enters initial state (with verification that state is possible)
        4. Output loops result.
        5. Example
         	 Input:
         	 	 loops number: 3
         	 	 initial: yellow
         	 Output:
				 yellow -> green -> blinking green -> red
				 yellow -> green -> blinking green -> red
				 yellow -> green -> blinking green -> red
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
