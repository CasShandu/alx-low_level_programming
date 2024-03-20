#include "main.h"

/**
 * factorial - returns the factorial of a number.
 * @n: number to return the factorial
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}

/* THE CALCULATION FOR THE EQUATION OF (n * factorial(n - 1)); IS AS FOLLOWS: [1 X FACTORIAL (1 - 1)! = 1]
 									      [5 X FACTORIAL (5 - 1)! = 120]
									      [10 X FACTORIAL (10 - 1)! = 3628800] */


