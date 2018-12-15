#include <iostream>
using namespace std;

int main() {
	int n = 500;
	int i = 1;
	while(n>0)
	{
		cout << "Step: " << i << "; n = " << n << endl;
		n /= 2;
		i++;
	}
	return 0;
}
