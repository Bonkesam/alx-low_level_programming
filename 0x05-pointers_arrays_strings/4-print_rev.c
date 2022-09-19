#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints in reverse
 * @s: the string
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i = strlen(i);

	while (i--)
	{
		putchar(*(s + i));
	}
	putchar(10);
}
