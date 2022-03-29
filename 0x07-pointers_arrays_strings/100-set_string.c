#include "main.h"

/**
 * set_string - function that sets the value of a pointer
 * to a char.
 * @s: a variable to use. its a pointer pointer.
 * @to: a variable which is if type char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
