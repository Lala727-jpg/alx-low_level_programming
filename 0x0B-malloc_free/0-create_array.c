#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * initializes it with a specific char.
 * @size: size of the array.
 * @c: the char variable
 * Return: a pointer to the variable that creates the array
 * NULL, if theres an error.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = (char *) malloc(sizeof(char) * size);

	if (b == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		c = *(b + i);
		i++;
	}
	*(b + i) = '\0';

	return (b);
}
