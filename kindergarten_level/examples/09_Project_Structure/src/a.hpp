#ifndef A_HPP_
#define A_HPP_

#include <iostream>
using namespace std;

class B;
class A
{
public:
	void Out() const;
	void SetB(B* const pB);
	B* const GetB() const;
private:
	B* mpB = nullptr;
};

#endif /* A_HPP_ */
