#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: variable to be printed.
 * @src: variable that gets concatenated to dest.
 * @n: number of character to be added to dest without the null terminator.
 * Return: the value of dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
