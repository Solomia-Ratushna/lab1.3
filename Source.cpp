//Source.cpp
#include "Vector.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	VectorN n;
	n.Read();
	cout << "n = ";
	n.Display();


	VectorN m;
	m.Read();
	cout << "m = ";
	m.Display();


	VectorN c = Add(n, m);
	c.Display();


	VectorN d = Subtract(n, m);
	d.Display();

	double E = ScalProd(n, m);
	cout << "—кал€рний добуток = " << E << endl;

	return 0;
}
