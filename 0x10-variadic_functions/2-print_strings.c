#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed
 * by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		if (separator == NULL)
		{
			printf("%s", str);
		}
		if (i == 0 && separator)
		{
			printf("%s", str);
		}
		printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(ap);
}
