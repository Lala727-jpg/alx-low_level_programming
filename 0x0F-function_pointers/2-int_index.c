#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @array: array to be considered.
 * @size: size of the array.
 * @cmp: pointer function that compares.
 * Return: -1 if there are no matches.
 * or returns the index for the first element.
 * or -1, if size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != '0'))
				return (i);
		}
	}
	return (-1);
}
