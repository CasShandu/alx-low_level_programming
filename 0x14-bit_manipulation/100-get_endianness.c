#include "main.h"

/**
 * get_endianness - check the system byte order
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	int little_or_big;


	little_or_big = (int) (((char *)&i)[0]);

	return (little_or_big);

}
