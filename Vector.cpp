//Vector.cpp
#include "Vector.h"

void  VectorN::Delete()
{
	delete[] a;
}
void VectorN::SetN(int value)
{
	if (value > 0)
	{
		N = value;
	}
	else
	{
		N = 0;
	}
}
void VectorN::Init(int N)
{
	SetN(N);
	a = new double[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = 0;
	}
}
void VectorN::Read()
{
	int N;
	cout << " ¬вед≥ть N = "; cin >> N;
	Init(N);
	for (int i = 0; i < N; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> a[i];
	}
}
void VectorN::Display() const
{
	cout << "( " << toString() << ")" << endl;
}

string VectorN::toString() const
{
	stringstream SS;
	for (int i = 0; i < N; i++)
	{
		SS << a[i] << " ";
	}

	return SS.str();
}

VectorN Add(const VectorN& l, const VectorN& r)
{
	VectorN res;
	res.N = r.N;
	res.Init(r.N);
	for (int i = 0; i < r.N; i++)
	{
		res.a[i] = l.a[i] + r.a[i];
	}
	return res;
}
VectorN Subtract(const VectorN l, const VectorN r)
{
	VectorN res;
	res.N = r.N;
	res.Init(r.N);
	for (int i = 0; i < r.N; i++)
	{
		res.a[i] = l.a[i] - r.a[i];
	}
	return res;
}
double ScalProd(const VectorN l, const VectorN r)
{
	double scal = 0;

	for (int i = 0; i < r.N; i++)
	{
		scal += (l.a[i] * r.a[i]);
	}

	return scal;
}

