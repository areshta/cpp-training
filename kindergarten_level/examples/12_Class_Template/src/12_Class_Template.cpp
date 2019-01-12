#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
class MyArray
{
public:
	//! default constructor
	MyArray()
	{
		cout << "Call MyInt() " << endl;
	};
	//some constructor
	MyArray(std::initializer_list<T> il):
	mSize(il.size())
	{
		cout << "Call MyInt(std::initializer_list<T> il) " << endl;
		mBuff = new T[mSize];
		T *p = mBuff;
		for( auto el: il) {
			*p++ = el;
		}
	}
	//some constructor
	MyArray(size_t sz):
	mSize(sz)
	{
		cout << "Call MyInt(size_t sz) " << endl;
		mBuff = new T[mSize];
		for( size_t i =0 ; i< mSize; ++i) {
			mBuff[i] = 0;
		}
	}
	//! copy constructor
	MyArray(const MyArray& mi)
	{
		cout << "Call (const MyInt& mi) " << endl;
		mSize = mi.mSize;
		mBuff = new T[mSize];
		memcpy( mBuff, mi.mBuff, mSize*sizeof(int) );
	}
	//! move constructor
	MyArray(MyArray&& mi)
	{
		cout << "Call MyInt(MyInt&& mi) " << endl;
		mSize = mi.mSize;
		mBuff = mi.mBuff;
		mi.mBuff = nullptr;
		mi.mSize = 0;
    }
	//! operator=
	MyArray& operator=(const MyArray& mi)
	{
		if(this != &mi){
			mSize = mi.mSize;
			mBuff = new T[mSize];
			memcpy( mBuff, mi.mBuff, mSize*sizeof(int) );
		}
		return *this;
	}
	//! destructor
	~MyArray()
	{
		cout << "Call ~MyInt() " << endl;
		delete[] mBuff;
		mBuff = nullptr; //not necessary but good habit
		mSize = 0;
	}
	void Print()
	{
		for(size_t i=0; i<mSize; ++i){
			cout << mBuff[i] << " ";
		}
		cout << endl;
	}
private:
	T* mBuff = nullptr;
	size_t mSize = 0;
};


int main()
{
	MyArray<int> mint {20,10,251,4,-8};
	mint.Print();

	MyArray<double> mdouble {-1.5, 0.0, 1.5 };
	mdouble.Print();

	MyArray<string> mstr {"one","two","three"};
	mstr.Print();

	return 0;
}
