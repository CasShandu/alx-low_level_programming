#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main()
{
	char any;

	for (any = 'a'; any <= 'z'; any++)
	putchar(any);

	for (any = 'A'; any  <= 'Z'; any++)
	putchar(any);
	putchar('\n');

	return (0);
}
