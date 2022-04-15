#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: type of argument.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *shu = "";

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", shu, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", shu, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", shu, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "nil";
					printf("%s%s", shu, str);
					break;
				default:
					i++;
					continue;
			}
			shu = ",";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
