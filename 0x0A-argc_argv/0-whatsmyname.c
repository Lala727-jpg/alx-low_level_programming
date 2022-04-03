#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: prints the number of argument.
 * @argv: prints an array of argument.
 * Return: 0, success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
