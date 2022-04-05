#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: an array where src is copied to.
 * @src: the string to be copied.
 * @n: number of characters to be copied.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
