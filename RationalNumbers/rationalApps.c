#include <stdio.h>
#include "rational.h"
#include "string2Int.h"



int main ()
{
	char ans;
	do
	{
		printf ("\n");
		printf ("\n");
		printf ("Applications you can perform :\n");
		printf ("1. Add Rationals\n");
		printf ("2. Subtract Rationals\n");
		printf ("3. Multiply Rationals\n");
		printf ("4. Divide Rationals\n");
		printf ("5. Invert Rational\n");
		printf ("6. Reduce Rational\n\n");
		printf ("Enter the application number you want to perform : ");
		int app;
		scanf ("%d", &app);
		getchar ();
		printf ("\n");

		Rational a, b, result;
		if (app <= 4)
		{
			printf ("Enter the first rational number (a/b): ");
			char rational1[19];
			scanf ("%s", rational1);
			getchar ();
			a = string2Int (rational1);

			printf ("Enter the second rational number (a/b): ");
			char rational2[19];
			scanf ("%s", rational2);
			getchar ();
			b = string2Int (rational2);
		}

		else
		{
			printf ("Enter the numerator of the rational number : ");
			char rational1[19];
			scanf ("%s", rational1);
			a = string2Int (rational1);
			getchar ();

		}

		switch (app)
		{
			case 1 :
			{
				result = addition (a, b);
				printf ("Sum = %d/%d\n", result.numerator, result.denominator);
				break;
			}

			case 2 :
			{
				b.numerator *= -1;
				result = addition (a, b);
				printf ("Difference = %d/%d\n", result.numerator, result.denominator);
				break;
			}

			case 3 :
			{
				result = multiplication (a, b);
				printf ("Product = %d/%d\n", result.numerator, result.denominator);
				break;
			}

			case 4 :
			{
				b = multiplicativeInverse (b);
				result = multiplication (a, b);
				printf ("Division = %d/%d\n", result.numerator, result.denominator);
				break;
			}

			case 5 :
			{
				result = multiplicativeInverse (a);
				printf ("Inversion = %d/%d\n", result.numerator, result.denominator);
				break;
			}

			case 6 :
			{
				result = reduce (a);
				printf ("Reduced fraction = %d/%d\n", result.numerator, result.denominator);
				break;
			}

			default:
			{
				printf ("Wrong application number entered \n");
			}
		}

		printf ("Do you want to continue using the program (y = yes and n = no) : ");
		scanf ("%c", &ans);
		getchar ();
	}
	while(ans == 'y');

	return 0;
}
