#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog.
 * @d: a pointer to struct dog.
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d == NULL)
		return;
	printf("Name: %c\nAge: %f\nOwner: %c\n" d->name, d->age, d->owner);
}
