#include <iostream>
#include <cstring>

using namespace std;

class MyIntArray
{
public:
	//! default constructor
	MyIntArray()
	{
		mObjID = mCounterObjID++ ;
		cout << "Call MyInt(), objID = " << mObjID << endl;
	};
	//some constructor
	MyIntArray(std::initializer_list<int> il):
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
	MyIntArray(size_t sz):
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
	MyIntArray(const MyIntArray& mi)
	{
		mObjID = mCounterObjID++ ;
		cout << "Call (const MyInt& mi), objID = " << mObjID << endl;
		mSize = mi.mSize;
		mBuff = new int[mSize];
		memcpy( mBuff, mi.mBuff, mSize*sizeof(int) );
	}
	//! move constructor
	MyIntArray(MyIntArray&& mi)
	{
		mObjID = mCounterObjID++ ;
		cout << "Call MyInt(MyInt&& mi), objID = " << mObjID << endl;
		mSize = mi.mSize;
		mBuff = mi.mBuff;
		mi.mBuff = nullptr;
		mi.mSize = 0;
    }
	//! operator=
	MyIntArray& operator=(const MyIntArray& mi)
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
	~MyIntArray()
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

	friend ostream& operator<< (ostream& o, const MyIntArray& mi);
};

unsigned int MyIntArray::mCounterObjID = 0;

ostream& operator<< (ostream& o, const MyIntArray& mi)
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
		MyIntArray mi;
		cout << mi << endl;
	}
	{
		cout << endl;
		MyIntArray mi {20,10,251,4,-8};
		cout << mi << endl;
	}
	{
		cout << endl;
		MyIntArray mi(7);
		cout << mi << endl;
	}
	{
		cout << endl;
		MyIntArray mi {1,2,3};
		MyIntArray mi1 {mi};
		cout << mi1 << endl;
	}
	{
		cout << endl;
		MyIntArray mi1, mi {1,2,3};
		mi1 = mi;
		cout << mi1 << endl;
	}
	{
		cout << endl;
		MyIntArray mi {7,7,7};
		MyIntArray mi1 = std::move(mi);
		cout << mi1 << endl;
		cout << mi << endl;
	}
	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task "Herarhy-3": Get previous project ("Herarhy-2")
    Increase classes by
    	Dynamic data  with allocation/ releasing
		constructor
		copy constructor
		move constructor
		operator=
		destructor
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.

