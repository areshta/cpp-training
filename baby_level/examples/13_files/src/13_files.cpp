#include <iostream>
#include <fstream>
//detective story. where is <ifstream> ?
#include <iosfwd>
#include <string>

using namespace std;

int main()
{
	string fname {"text.txt"};

	ofstream ofile(fname);

	ofile << "File I/O test.Line 1\nLine 2" << endl;

    string line;
	ifstream myfile (fname);
	if (myfile.is_open())
	{
		while ( getline (myfile,line) )
		{
		   cout << line << '\n';
		}
		myfile.close();
	}

	else cout << "Unable to open file";

	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Write a program that
        1. inputs some numbers from console and store them in vector (use push_back function)
        2. zero number cause end of input
        3. outputs numbers in file "number.txt"
        After ending of the program find the file in your system
        (it could be present in the binary execution folder)
        and verify content.
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
