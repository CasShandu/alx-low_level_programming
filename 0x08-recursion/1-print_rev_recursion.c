#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse
 * @s: the string to reverse
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);

}
