#include "main.h"

/**
 * _isalpha - if true, returns lowercase or uppercase letter, zero otherwise.
 * @c: Variable to use
 * Return: 1, if true 0 otherwise
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

