#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a
 *  copy of the string given as a parameter.
 *  @str: the copy of string.
 *  Return: NULL if str is NULL.
 *  or returns a pointer.
 */
char *_strdup(char *str)
{
	int str_size;
	static char *cpy;
	char *cpy_set;

	/* allocate memory for duplicate */
	str_size = strlen(str);
	cpy = (char *) malloc(sizeof(char) * str_size + 1);
	if (cpy == NULL)
		return ((char *)NULL);
	cpy_set = cpy;

	while (str)
	{
		*cpy_set = *str;
		cpy_set++;
		str++;
	}
	*cpy_set = '\0';
	return (cpy);
}