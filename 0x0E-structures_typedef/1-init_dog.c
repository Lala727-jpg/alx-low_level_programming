#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises struct dog.
 * @d: pointer to dog
 * @name: member variable.
 * @age: member variable
 * @owner: member variable.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
