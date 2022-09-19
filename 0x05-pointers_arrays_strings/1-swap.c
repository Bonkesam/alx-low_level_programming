#include "main.h"

/**
 * swap_int - Swaps 2 intagers
 * @a: first int
 * @b:second int
 *
 * Return: Always return 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
