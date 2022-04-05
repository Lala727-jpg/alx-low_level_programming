#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: variable used.
 * Return: the outcome of the code.
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		len++;
	}
	return (len);
}

