#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: a pointer to the new string.
 * or NULL, on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	new_str = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
		return (NULL);
	if (s1)
	{
		while (i < len1)
		{
			new_str[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			new_str[i] = s2[j];
			i++;
			j++;
		}
	}
	new_str[i] = '\0';
	return (new_str);
}
