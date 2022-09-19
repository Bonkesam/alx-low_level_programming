#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n arrays
 * @a: array
 * @n: Number of array
 *
 * Return: always return 0
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
		{
			printf("%d, ", a[inc]);
		}
		else
		{
			printf("%d, ", a[inc]);
		}
	}
	putchar(10);
}
