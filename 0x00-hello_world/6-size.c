#include <stdio.h>

/**
 * main - prints the size of various computer types
 * Return 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int l;
	float f;

printf("Size of char: %lu bytes(s)\n", (unsigned long)sizeof(a));
prinf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));

return (0);

}
