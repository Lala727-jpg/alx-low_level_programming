#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * of your program.
 * @ac: number of args.
 * @av: array of args.
 * Return: NULL if ac == 0 or av == NULL.
 * or returns a pointer to the new strung.
 * or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	string = malloc(sizeof(char) * (len + 2));
	k = 0;
	if (string == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[k] = av[i][j];
			k++;
		}
		string[k] = '\n';
		k++;
	}
	return (string);
}
