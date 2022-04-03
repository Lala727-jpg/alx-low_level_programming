#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplues two numbers
 * @argc: number of argument
 * @argv: array of argument.
 * Return: 0, on success.
 * 1, when it encounters an error.
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);
	return (0);
}
