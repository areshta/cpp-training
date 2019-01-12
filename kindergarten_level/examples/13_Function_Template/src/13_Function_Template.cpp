
#include <iostream>
using namespace std;

template<typename T>
T summ(const T& a1, const T& a2)
{
	return a1+a2;
}


int main() {

	cout << summ(2,3) << endl;
	cout << summ(string("I am "), string("a good boy!")) << endl;

	return 0;
}
