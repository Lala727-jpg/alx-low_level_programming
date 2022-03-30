#include "main.h"

/**
 * real_prime_num - uses two variables , n and i.
 * @n: variable to use.
 * @i: iterator.
 * Return: the int or -1
 */
int real_prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (real_prime_num(n, i - 1));
}

/**
 * is_prime_number - returns tru if an int is a prime num.
 * @n: variable to use.
 * Return: 1, if prime, 0 if otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (real_prime_num(n, n - 1));
}
