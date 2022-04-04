#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: result of the addition.
 * or 1, if one of the numbers contain a symbol.
 */
int main(int argc, char *argv[])
{
	int a, b, c, digit, add;

	digit = 0;
	add = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (c = 1; c < argc; c++)
	{
		digit = atoi(argv[c]);

		if (digit >= 0)
		{
			add = add + digit;
		}
	}
	printf("%d\n", add);
	return (0);
}
