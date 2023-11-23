#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * from one number to another
 * @n: first number to compared
 * @m: second number to be compared
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;

	}
	return (count);

}
