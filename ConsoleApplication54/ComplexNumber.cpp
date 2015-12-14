#include "complexNumber.h"


complexNumber::complexNumber(double real, double imag)
{
	realPart = real;
	imaginarypart = imag;
}

ostream & operator << (ostream& osObject, const complexNumber& complex)
{
	osObject << "(";
	osObject << complex.realPart;
	osObject << ", ";
	osObject << complex.imaginarypart;
	osObject << ")";

	return osObject;
}
istream & operator >> (istream& isObject, complexNumber& complex)
{
	isObject >> complex.realPart;
	isObject >> complex.imaginarypart;

	return isObject;
}

complexNumber complexNumber::operator+ (const complexNumber & otherComplex) const
{
	complexNumber temp;
	temp.realPart = realPart + otherComplex.realPart;
	temp.imaginarypart = imaginarypart + otherComplex.imaginarypart;

	return temp;
}

complexNumber complexNumber::operator- (const complexNumber & otherComplex) const
{
	complexNumber temp;
	temp.realPart = realPart - otherComplex.realPart;
	temp.imaginarypart = imaginarypart - otherComplex.imaginarypart;

	return temp;
}
complexNumber complexNumber::operator/ (const complexNumber & otherComplex) const
{
	complexNumber temp;
	temp.realPart = ((realPart * otherComplex.realPart) + (imaginarypart *otherComplex.imaginarypart)) / ((otherComplex.realPart)*(otherComplex.realPart) + (otherComplex.imaginarypart)*(otherComplex.imaginarypart));
	temp.imaginarypart = (((-realPart) * otherComplex.imaginarypart) + (imaginarypart *otherComplex.realPart)) / ((otherComplex.realPart)*(otherComplex.realPart) + (otherComplex.imaginarypart)*(otherComplex.imaginarypart));

	return temp;
}
complexNumber complexNumber::operator* (const complexNumber & otherComplex) const
{
	complexNumber temp;
	temp.realPart = (realPart * otherComplex.realPart) - (imaginarypart *otherComplex.imaginarypart);
	temp.imaginarypart = (realPart * otherComplex.imaginarypart) - (imaginarypart *otherComplex.realPart);

	return temp;
}
bool complexNumber::operator== (const complexNumber & otherComplex) const
{
	return (realPart == otherComplex.realPart && imaginarypart == otherComplex.imaginarypart);
}


complexNumber::~complexNumber()
{
}
