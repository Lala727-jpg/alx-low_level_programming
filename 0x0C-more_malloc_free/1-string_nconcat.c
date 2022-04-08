#include "main.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of string to copy from s2.
 * Return: a memory space
 * or NULL if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
	{
		s = malloc(sizeof(int) * len1 + n + 1);
	}
	if (n >= len2)
		s = malloc(sizeof(int) * len1 + len2 + 1);
	if (s == NULL)
		return (NULL);
	/*copying the valuez of s1 and s2 into s*/
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
