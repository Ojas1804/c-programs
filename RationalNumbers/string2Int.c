#include "rational.h"
#include "string2Int.h"
#include <stdio.h>


int toInt (char i)
{
	if (i == '0')
		return 0;

	if (i == '1')
		return 1;

	if (i == '2')
		return 2;

	if (i == '3')
		return 3;

	if (i == '4')
		return 4;

	if (i == '5')
		return 5;

	if (i == '6')
		return 6;

	if (i == '7')
		return 7;

	if (i == '8')
		return 8;

	if (i == '9')
		return 9;
}


char* convertToFraction (char *ratNum)
{
	int i;
	for (i = 0; ratNum [i] != '\0'; i++)
	{
		if (ratNum [i] == '/')
		{
			return ratNum;
		}
	}
	ratNum [i] = '/';
	ratNum [i+1] = '1';
	ratNum [i+2] = '\0';
	return ratNum;
}


Rational string2Int (char ratNum[])
{
	int i = 0, n = 0, d = 0;

	ratNum = convertToFraction (ratNum);
	while (ratNum [i] != '/')
	{
		n = (n*10) + toInt (ratNum [i]);
		i++;
	}

	i++;


	while (ratNum [i] != '\0')
	{
		d = (d*10) + toInt (ratNum [i]);
		i++;
	}
	Rational number;
	number .  numerator = n;
	number . denominator = d;

	return number;
}
