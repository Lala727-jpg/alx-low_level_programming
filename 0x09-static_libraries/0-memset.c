#include "main.h"

/**
 * _memset - fills a byte into the memory.
 * @s: variable.
 * @b: character variable
 * @n: number of times.
 * Return: pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
