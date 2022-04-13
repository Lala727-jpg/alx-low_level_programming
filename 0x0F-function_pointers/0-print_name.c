#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name.
 * @name: var to use.
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
