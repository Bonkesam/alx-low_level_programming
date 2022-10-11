#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog
 * @d: Pointer to dog
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		fre(d);
	}
}
