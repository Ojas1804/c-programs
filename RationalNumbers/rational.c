#include <stdio.h>
#include "rational.h"



int gcd(int a, int b)
{
    if (a == 0)
       return b;
    else if (b == 0)
       return a;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}


Rational reduce (Rational a)
{
	int denomOfRes = a . denominator / gcd (a . denominator, a . numerator);
	int numerOfRes = a . numerator / gcd (a . denominator, a . numerator);

	Rational result;
	result . numerator = numerOfRes;
	result . denominator = denomOfRes;
	return result;
}


Rational addition (Rational a, Rational b)
{
	int denomOfRes = (a.denominator * b.denominator);
	int numerOfRes = ((a . numerator * b . denominator) + (b . numerator * a . denominator));

	Rational result;
	result . numerator = numerOfRes;
	result . denominator = denomOfRes;
	return (reduce(result));
}


Rational multiplication (Rational a, Rational b)
{
	int denomOfRes = (a.denominator * b.denominator);
	int numerOfRes = (a . numerator * b . numerator);

	Rational result;
	result . numerator = numerOfRes;
	result . denominator = denomOfRes;
	return (reduce(result));
}

Rational  multiplicativeInverse (Rational a)
{
	int temp;
	temp = a . numerator;
	a . numerator = a . denominator;
	a . denominator = temp;

	return (a);
}
