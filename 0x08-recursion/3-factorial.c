#include "main.h"

/**
 * factorial - a function that returns the factorial
 * of a given number.
 * @n: variable to be used.
 * Return: 0, if n is 1.
 * -1 if n is a negative number
 *  or a real number if n is greater than 0
 */
int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
