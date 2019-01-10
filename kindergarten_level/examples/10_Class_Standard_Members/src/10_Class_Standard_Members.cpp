#include <iostream>
#include <cstring>

using namespace std;

class MyInt
{
public:
	//! default constructor
	MyInt()
	{
		mObjID = mCounterObjID++ ;
		cout << "Call MyInt(), objID = " << mObjID << endl;
	};
	//some constructor
	MyInt(std::initializer_list<int> il):
	mSize(il.size())
	{
		mObjID = mCounterObjID++ ;
		cout << "Call MyInt(std::initializer_list<int> il), objID = " << mObjID << endl;
		mBuff = new int[mSize];
		int *p = mBuff;
		for( auto el: il) {
			*p++ = el;
		}
	}
	//some constructor
	MyInt(size_t sz):
	mSize(sz)
	{
		mObjID = mCounterObjID++ ;
		cout << "Call MyInt(size_t sz), objID = " << mObjID << endl;
		mBuff = new int[mSize];
		for( size_t i =0 ; i< mSize; ++i) {
			mBuff[i] = 0;
		}
	}
	//! copy constructor
	MyInt(const MyInt& mi)
	{
		mObjID = mCounterObjID++ ;
		cout << "Call (const MyInt& mi), objID = " << mObjID << endl;
		mSize = mi.mSize;
		mBuff = new int[mSize];
		memcpy( mBuff, mi.mBuff, mSize*sizeof(int) );
	}
	//! move constructor
	MyInt(MyInt&& mi)
	{
		mObjID = mCounterObjID++ ;
		cout << "Call MyInt(MyInt&& mi), objID = " << mObjID << endl;
		mSize = mi.mSize;
		mBuff = mi.mBuff;
		mi.mBuff = nullptr;
		mi.mSize = 0;
    }
	//! operator=
	MyInt& operator=(const MyInt& mi)
	{
		cout << "Call operator=(const MyInt& mi), objID = " << mObjID << endl;
		if(this != &mi){
			mSize = mi.mSize;
			mBuff = new int[mSize];
			memcpy( mBuff, mi.mBuff, mSize*sizeof(int) );
		}
		return *this;
	}
	//! destructor
	~MyInt()
	{
		cout << "Call ~MyInt(), objID = " << mObjID << endl;
		delete[] mBuff;
		mBuff = nullptr; //not necessary but good habit
		mSize = 0;
	}
private:
	int* mBuff = nullptr;
	size_t mSize = 0;
	unsigned int mObjID;
	static unsigned int mCounterObjID;

	friend ostream& operator<< (ostream& o, const MyInt& mi);
};

unsigned int MyInt::mCounterObjID = 0;

ostream& operator<< (ostream& o, const MyInt& mi)
{
	for(size_t i=0; i< mi.mSize;++i) {
		o << mi.mBuff[i]<< " ";
	}
	return o;
}

int main()
{
	{
		cout << endl;
		MyInt mi;
		cout << mi << endl;
	}
	{
		cout << endl;
		MyInt mi {20,10,251,4,-8};
		cout << mi << endl;
	}
	{
		cout << endl;
		MyInt mi(7);
		cout << mi << endl;
	}
	{
		cout << endl;
		MyInt mi {1,2,3};
		MyInt mi1 {mi};
		cout << mi1 << endl;
	}
	{
		cout << endl;
		MyInt mi1, mi {1,2,3};
		mi1 = mi;
		cout << mi1 << endl;
	}
	{
		cout << endl;
		MyInt mi {7,7,7};
		MyInt mi1 = std::move(mi);
		cout << mi1 << endl;
		cout << mi << endl;
	}
	return 0;
}
