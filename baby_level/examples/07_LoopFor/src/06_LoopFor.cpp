#include <iostream>
using namespace std;

int main() {

	for(int i=0; i<10; ++i)
		cout << i << " ";

	cout << "\n\n";

	char c = 'z';
	for(int i = 0 ; ; ++i , --c )
	{
		cout << c;
		if(c=='a')
		{
			cout << endl << "Num of chars: " << i+1 << endl;
			break;
		}
	}

	cout << "\n\n";

	int i = 0;
	for(;;)
	{
		cout << i++ << " ";
		if(i < 20)
			continue;
		cout << "\nIt is time to break!" << endl;
		break;
	}

	return 0;
}
