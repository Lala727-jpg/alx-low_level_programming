#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters.
 * @n: number of argument lists.
 * Return: The sum of the parameters.
 * or 0, if there are no parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(ap, const unsigned int);
	}
	va_end(ap);
	return (sum);
}
