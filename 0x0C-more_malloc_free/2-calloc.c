#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills the memory area with bytes
 * @s: memory area.
 * @b: character
 * @n: number of times to copy a character.
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

/**
 * _calloc - function that allocates memory for an array,
 * using malloc.
 * @nmemb: members of an array
 * @size: size of an array
 * Return: pointer to the newly allocated memory
 * or NULL, if nmemb or size == 0
 * or NULL, if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
