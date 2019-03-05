#include <iostream>
using namespace std;

struct speed {
	explicit speed(long double v): value(v){}
	long double value;
};

struct mass {
	explicit mass(long double v): value(v){}
	long double value;
};

struct energy {
	explicit energy(long double v): value(v){}
	long double value;
};


speed operator""_m_s(long double v){ return std::move(speed(v));}
mass operator""_kg(long double v){ return std::move(mass(v));}
energy operator""_dj(long double v){ return std::move(energy(v));}

energy calc_energy(mass ms, speed sp)
{
	return energy(ms.value*sp.value*sp.value/2);
}

int main() {

	speed 	s = 10._m_s;
	mass 	m = 1._kg;
	energy 	e = calc_energy(m,s);

	cout << "energy:" << e.value << endl;

	energy e2 = 5.0_dj;

	cout << "energy:" << e2.value << endl;

	return 0;
}
