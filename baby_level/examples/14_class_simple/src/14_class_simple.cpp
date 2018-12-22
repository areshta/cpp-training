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
