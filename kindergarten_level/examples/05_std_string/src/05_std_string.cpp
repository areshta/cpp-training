#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void ReplaceString(string& str, const string& search, const string& replace) {
    size_t pos = 0;
    while((pos = str.find(search, pos)) != string::npos)
    {
         str.replace(pos, search.length(), replace);
         pos += replace.length();
    }
}

int main() {

	string str1 {"Boris is a good boy!\nHe studies C++!\n"};
	string str2 {"C++ is excellent!"};
	string concat = str1+str2;
	cout << concat << endl;

	str1[0] = 'T';
	cout << str1.substr(0,6) << endl;
	cout << concat.find_first_of("C++") << " " << concat.find_last_of("C++") << endl;
	ReplaceString(concat,"C++","Python");
	cout << concat << endl;

	//converting
	stringstream buff;
	buff << "Boris " << 25 << " years old" << endl;
	cout << buff.str() << endl;
	string name;
	int age = 0;
	buff >> name >> age;
	cout << "Name:" << name << "\nAge:" << age << endl;

	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Create the program that
        1. Reads from text file your lovely poetry
        2. Calculates number of points and commas in the text
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
