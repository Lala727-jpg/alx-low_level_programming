#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed
 * by a new line.
 * @separator: string in between numbers.
 * @n: number of ints to print.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		} else if (i == 0 && separator != NULL)
		{
			printf("%d", va_arg(ap, int));
		} else
			printf("%s%d", separator, va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
