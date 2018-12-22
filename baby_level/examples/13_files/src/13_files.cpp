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
