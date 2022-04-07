#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string.
 * @n: number of string to cooy from second string.
 * Return: pointer to a bewly allocated space in memory.
 * or NULL if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *temp;
	int i, j;

	i = 0;
	j = 0;

	if (!*s1)
	{
		s1 = "";
	}
	if (!*s2)
	{
		s1 = "";
	}
	ptr = malloc(sizeof(char *) * strlen(s1) + n + 1);
	*ptr = *temp;

	while (*s1 != '\0')
	{
		*ptr++ = *temp++;
	}
	for (n = 0; s2[n] != '\0'; n++)
	{
		*s2++ = *temp++;
		*temp++ = *ptr++;
	}
	*ptr++ = '\0';
	return (ptr);
}
