#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of intagers
 * @min: First int
 * @max: Last int
 *
 * Return: Pointer to newly allocated mem or NULL on failure
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
		a[i] = min;
	return (a);
}
