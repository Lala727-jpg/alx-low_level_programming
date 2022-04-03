#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: the number of argument.
 * @argv: the list of arguments
 * Return: 0, if no number is passed,
 * 1, if a symbol is passed.
 */
int main(int argc, char *argv[])
{
	int i, k, add, digits;

	add = 0;
	digits = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > '9' || *argv[i] < '0')
		{
			printf("Error\n");
			return (1);
		}
	}
	for (k = 1; k < argc; k++)
	{
		digits = atoi(argv[k]);

		if (digits >= 0)
		{
			add = add + digits;
		}
	}
	printf("%d\n", add);
	return (0);
}
