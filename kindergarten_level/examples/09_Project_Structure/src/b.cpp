#include "b.hpp"

void B::Out() const
{
	cout << "It is B!" << endl;
}

void B::SetA(A* const pA)
{
	mpA = pA;
}

A* const B::GetA() const
{
	return mpA;
}
