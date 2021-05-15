#ifndef RATIONAL_H
#define RATIONAL_H

typedef struct rational
{
	int numerator;
	int denominator;
} Rational;

Rational reduce (Rational a);
Rational addition (Rational a, Rational b);
Rational multiplication (Rational a, Rational b);
Rational  multiplicativeInverse (Rational a);

#endif
