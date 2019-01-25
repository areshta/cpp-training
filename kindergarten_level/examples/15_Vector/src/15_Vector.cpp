#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

void checkVectorBuffAdr(vector<int>& v)
{
	int *pInt = v.data();
	cout << " init; sz = " << v.size() << "; cp = " << v.capacity()
						 <<"; adr = " << pInt << endl;
	for(size_t i=0; i<1000; i++)
	{
		v.push_back(i);
		int *pIntNew = v.data();
		if(pIntNew != pInt){
			cout << "i = " << setw(4) << i
					 << "; sz = " << setw(4) << v.size()
					 << "; cp = " << setw(4) << v.capacity()
					 <<"; adr = " << pIntNew << endl;
			pInt = pIntNew;
		}
	}
}

void outStrs(const vector<string>& vc)
{
	for(auto str: vc)
	{
		cout << str << endl;
	}
}

int main()
{
	vector<int> v1;
	cout << "============ v1 ================\n";
	checkVectorBuffAdr(v1);

	vector<int> v2;
	v2.reserve(1000);
	cout << "============ v2 ================\n";
	checkVectorBuffAdr(v2);

	vector<string> strs = {"one","two","three","four","five","six","seven", "eight", "nine", "ten"};
	cout << "\n===== strings ======\n";
	outStrs(strs);

	sort(strs.begin(), strs.end());
	cout << "\n===== sort strings alphabetic ======\n";
	outStrs(strs);

	sort(strs.begin(), strs.end(),
		          [] (string const& a, string const& b) { return a.size() < b.size(); });

	cout << "\n===== sort strings by length ======\n";
	outStrs(strs);

	//access by index example
	for(size_t i; i < strs.size(); ++i){
		strs[i] = string("== ") + strs[i] + string(" ==");
	}
	cout << "\n===== strings after edit ======\n";
	outStrs(strs);

	vector<string> strs1 = {"", "", "", "", ""}; // the elements before coping must be present
	copy(strs.begin(), strs.begin()+5, strs1.begin() );
	cout << "\n===== 5 elements copy array ======\n";
	outStrs(strs1);

}
