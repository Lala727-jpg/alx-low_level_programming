#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a collection if variables of different type
 * @name: 1st num
 * @age: 2nd mem
 * @owner: 3rd mem
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;

/**prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
