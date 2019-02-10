#include <iostream>
#include <memory>
#include <string>

using namespace std;


/*
Bad idea: one object hold other
class A
{
public:
	A(const string& name): mName(name){}
	void SetOther(std::shared_ptr<A>& pA){ m_pOther.reset(pA.get()); }
	string GetName() { return mName; }
	void Neighbour() { cout << "I am " << mName << ". My neighbour is " << m_pOther.get()->GetName() << endl;}
private:
	string mName;
	shared_ptr<A> m_pOther;
};
*/


class A
{
public:
	A(const string& name): mName(name)
		{
		}
	void SetOther(std::shared_ptr<A>& pA)
		{
			m_pOther=pA;
		}
	string GetName() {
			return mName;
		}
	void Neighbour()
		{
			if ( auto p = m_pOther.lock() ){
				cout << "I am " << mName << ". My neighbour is " << p.get()->GetName() << endl;
			}
		}
private:
	string mName;
	weak_ptr<A> m_pOther;
};



int main() {
	shared_ptr<A> pA1( new A("one") );
	shared_ptr<A> pA2( new A("two") );
	pA1->SetOther(pA2);
	pA2->SetOther(pA1);
	pA1->Neighbour();
	pA2->Neighbour();
	return 0;
}
