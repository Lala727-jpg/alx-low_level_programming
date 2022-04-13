#include "function_pointers.h"
#include "stdlib.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: the array of elements.
 * @size: size of array
 * @action: pointer to rhe function needed to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || action == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
