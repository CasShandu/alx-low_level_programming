#include "main.h"
#include <stddef.h>

/**
 * get_bit - gets the value of a bit of certain index
 * @index: the index of the it to be found
 * @n: the number to check the value against
 * Return: integer 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int p;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (p = 0; p < index; p++)
		n = n >> 1;
	return ((n & 1));

}
