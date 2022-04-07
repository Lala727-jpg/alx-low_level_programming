#include "stdlib.h"
#include "main.h"

/**
 * count_words - counts the number if words in a string.
 * @s: string to evaluate.
 * Return: number of wirds.
 */
int count_words(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}
/**
 * strtow - splits a string into words.
 * @str: strung.
 * Return: pointer ro the array.
 */
char **strtow(char *str)
{
	char **tree, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
	{
		len++;
	}
	words = count_words(str);
	if (words == 0)
		return (NULL);
	tree = (char **) malloc(sizeof(char *) * (words + 1));
	if (tree == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				tree[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	tree[k] = NULL;
	return (tree);
}
