#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints to standard output
 * @n: The number to print from
 *
 * Description: This function prints numbers from
 * n to 98
 * Return: Always return 0 (Success)
 */

int print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
