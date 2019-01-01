#pragma once

#include <iostream>
using namespace std;

class A;
class B
{
public:
	void Out() const ;
	void SetA(A* const pA);
	A* const GetA() const;
private:
	A* mpA = nullptr;
};
