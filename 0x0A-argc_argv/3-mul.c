#include "main.h"
#include <stdio.h>

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
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);
	return (0);
}

/**
 * _atoi - converts a string to int.
 * @s: varuavle to use.
 * Return: the int of the strung converted.
 */
int _atoi(char *s)
{
	int num, i;

	num = 0;
	i = 0;

	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (num);
}
