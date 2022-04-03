#include <unistd>

/**
 * _putchar - prints out a character.
 * @c: variable used.
 * Return: 1, if successful or -1 if it has an error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
