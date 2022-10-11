#include "dog.h"

/**
 * init_dog - initializes struct type dog
 * @d: Pointer to struct
 * @name: The dog's name
 * @age: The dog's age
 * @owner: pointer to dog's owner
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
		d->name = name;
		d->age = age;
		d->owner = owner;
}
