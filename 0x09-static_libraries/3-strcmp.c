#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first variable that represents a string.
 * @s2: second variable that represents a string.
 * Return: less than 0 if s1 is less than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
