#include <iostream>
#include <cstring>

using namespace std;

class MyInt
{
public:
	MyInt(){}; //default constructor
	MyInt(std::initializer_list<int> il):
	mSize(il.size())
	{
		mBuff = new int[mSize];
		int *p = mBuff;
		for( auto el: il) {
			*p++ = el;
		}
	}
	MyInt(size_t sz):
	mSize(sz)
	{
		mBuff = new int[mSize];
		for( size_t i =0 ; i< mSize; ++i) {
			mBuff[i] = 0;
		}
	}
	MyInt(const MyInt& mi)
	{
		mSize = mi.mSize;
		mBuff = new int[mSize];
		memcpy( mBuff, mi.mBuff, mSize*sizeof(int) );
	}
	MyInt& operator=(const MyInt& mi)
	{
		if(this != &mi){
			mSize = mi.mSize;
			mBuff = new int[mSize];
			memcpy( mBuff, mi.mBuff, mSize*sizeof(int) );
		}
		return *this;
	}
	~MyInt()
	{
		delete[] mBuff;
		mBuff = nullptr; //not necessary but good habit
		mSize = 0;
	}
private:
	int* mBuff = nullptr;
	size_t mSize = 0;

	friend ostream& operator<< (ostream& o, const MyInt& mi);
};

ostream& operator<< (ostream& o, const MyInt& mi)
{
	for(size_t i=0; i< mi.mSize;++i) {
		o << mi.mBuff[i]<< " ";
	}
	return o;
}

int main() {
	MyInt mi {20,10,251,4,-8};

	cout << mi << endl;

	return 0;
}
