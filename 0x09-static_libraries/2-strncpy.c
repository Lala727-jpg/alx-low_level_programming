#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: destination.
 * @src: source.
 * Return: the destination.
 * @n: number of strings to be copied.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
