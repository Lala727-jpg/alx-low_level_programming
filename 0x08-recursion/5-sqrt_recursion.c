#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a num.
 * @n: variable to be used.
 * Return: the value of the square root.
 * or -1 if it is an error.
 */
int _sqrt_recursion(int n)
{
	if (n >= 0)
	{
		return (real_sqrt_recursion(n, 0));
	} else
		return (-1);
}

/**
 * real_sqrt_recursion - uses two variables to return the
 * value of the natural square root of a num.
 * @n: variable to be used.
 * @i: iterator.
 * Return: value of the squAre root of a num.
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (real_sqrt_recursion(n, i + 1));
}
