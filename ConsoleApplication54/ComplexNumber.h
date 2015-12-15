#pragma once
#ifndef H_complexNumber
#define H_complexNumber
#include "iostream"
using namespace std;
class complexNumber
{
	friend ostream & operator << (ostream&, const complexNumber&);
	friend istream & operator >> (istream&, complexNumber&);
public:
	complexNumber(double real = 0, double imag = 0);
	complexNumber setComplex(double a, double b);
	complexNumber operator+ (const complexNumber & otherComplex) const;
	complexNumber operator- (const complexNumber & otherComplex) const;
	complexNumber operator/ (const complexNumber & otherComplex) const;
	complexNumber operator* (const complexNumber & otherComplex) const;
	bool operator== (const complexNumber & otherComplex) const;
	~complexNumber();

private:
	double realPart;
	double imaginarypart;
};

#endif
