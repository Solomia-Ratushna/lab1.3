//Vector.h
#pragma once

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class VectorN
{
private:

	int N;
	double* a;

public:

	int GetN() const { return N; }
	void Delete();

	void SetN(int value);

	void Init(int N);
	void Read();
	void Display() const;

	string toString() const;

	friend VectorN Add(const VectorN& l, const VectorN& r);
	friend VectorN Subtract(const VectorN l, const VectorN r);
	friend double ScalProd(const VectorN l, const VectorN r);

};

