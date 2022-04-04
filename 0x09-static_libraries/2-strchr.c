#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character.
 * @s: string to search.
 * @c: char.
 * Return: a pointer to the first sting.
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
