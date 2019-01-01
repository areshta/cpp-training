#include "a.hpp"

void A::Out() const
{
	cout << "It is A!" << endl;
}

void A::SetB(B* const pB)
{
	mpB = pB;
}

B* const A::GetB() const
{
	return mpB;
}



