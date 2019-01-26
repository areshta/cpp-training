#include <iostream>
#include <string>

using namespace std;

class CStudent
{
public:
	CStudent (const string& name, int age);
	~CStudent ();
	void Print();
private:
	string mName;
	int mAge;
};

CStudent::CStudent(const string& name, int age):
mName(name),
mAge(age)
{
	cout << "The class is constructed" << endl;
}
CStudent::~CStudent ()
{
	cout << "The class is destroyed" << endl;
}

void CStudent::Print()
{
	cout << "Student name: " << mName << "\nStudent age:" << mAge << endl;
}

int main() {
	cout << "Before start" << endl;
	CStudent student {"Boris",19 };
	student.Print();
	cout << "Before end" << endl;
	return 0;
}


/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task: Write a program that demonstrates working with classes
        1.Choose some subject that is interesting for you
        2. The class have to have 2 fields: string and double
        3. The class have to have output function
        4. Create 2 objects of this class
        5. Output them
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
