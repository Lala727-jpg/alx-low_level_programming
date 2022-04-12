#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gets the length of a string.
 * @s: string to be evaluated.
 * Return: length of the evaluated string.
 */
int _strlen(char *s)
{
	int len1;

	len1 = 0;
	while (s[len1] != '\0')
		len1++;
	return (len1);
}
/**
 * _strcpy - copies a string from src to dest including
 * the null terminator.
 * @dest: the destination string
 * @src: the source string.
 * Return: a pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len1, i;

	len1 = 0;
	while (src[len1] != '\0')
		len1++;
	for (i = 0; i < len1; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - newest of the newest dog.
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: owner of the new dog.
 * Return: NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(int) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(int) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
