#include "main.h"

/**
 * main - Entry point.
 *
 * description: prints alphabet in lower case
 * Return: Always return a 0 Sucess
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
