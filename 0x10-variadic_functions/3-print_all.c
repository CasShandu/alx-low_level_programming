#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	char *sep = "";
	va_list spc;
	char *str;

	va_start(spc, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", sep, va_arg(spc, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(spc, double));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(spc, int));
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				break;
		}

		sep = ", ";

		i++;
	}
	printf("\n");
	va_end(spc);
}

