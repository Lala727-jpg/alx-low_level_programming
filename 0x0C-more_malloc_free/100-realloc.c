#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and
 * free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size of the previously allocated memory.
 * @new_size: size of the new memory block.
 * Return: pointer to the newly allocated block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* declaring and initialising */
	char *ptr_new;
	char *oldptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == 0)
		return (malloc(new_size));
	ptr_new = malloc(new_size);
	if (ptr_new == 0)
		return (NULL);
	oldptr = ptr_new;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr_new[i] = oldptr[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr_new[i] = oldptr[i];
	}
	free(ptr);
	return (ptr_new);
}
