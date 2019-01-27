#include <iostream>
using namespace std;

class Unit
{
public:
	void Print() { cout << "Price = " << mPrice << endl;}
protected:
	void SetPrice( double price) {mPrice = price;}
private:
	double mPrice = -1;
};

class Phone: public Unit
{
public:
	void Print() { cout << "SoundBandWidth = " << mSoundBandWidth << endl;}
protected:
	void SetSoundBandWidth( double bwidth) {mSoundBandWidth = bwidth;}
private:
	double mSoundBandWidth = -1;
};

class Smarphone: public Phone
{
public:
	Smarphone(double price, double soundBandWidth, double sceenSize):
		mScreenSize {sceenSize}
	{
		// mSoundBandWidth = soundBandWidth; using private of parent is disabled
		SetPrice(price);
		SetSoundBandWidth(soundBandWidth);
	}
	void Print()
	{
		Unit::Print();
		Phone::Print();
		cout << "ScreenSize = " << mScreenSize << endl;
	}
private:
	double mScreenSize;
};

int main() {
	Smarphone sm(449.99, 3100, 7.5 );
	sm.Print();
	return 0;
}

/*
    Advise: To be efficient please aviod copy/past of code of the example while making tasks!
    		Start from scratch and your mind will training better.
*/

/*
    Task "Herarhy-1": Chose some topic for herarhy. Some examples:
    	plant -> tree -> oak
    	animal -> bird -> sparrow
    	language -> program language -> Python
    	etc.
    	Write a program that demonstrates herarhy using
*/

// Copyfree (F) By Oleksii Reshta (areshta). No rights reserved.
