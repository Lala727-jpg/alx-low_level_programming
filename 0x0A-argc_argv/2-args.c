#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * All arguments should be printed, including the first
 * Only print one argument per line, ending with a line
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0, success.
 */
int main(int argc, char *argv[])
{
	int iterator;

	for (iterator = 0; iterator < argc; iterator++)
	{
		printf("%s\n", argv[iterator]);
	}
	return (0);
}
