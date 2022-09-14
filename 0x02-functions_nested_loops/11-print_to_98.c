#include "main.h"

/**
 * print_to_98 - Addition
 * @i: the number to be added
 *
 * description: prints number to 98
 * Return: always return nothing (succes)
 */
void print_to_98(int i)
{
	if (i <= 98)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
		i++;
	}
}
