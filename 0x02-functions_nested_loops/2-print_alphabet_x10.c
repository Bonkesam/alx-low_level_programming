#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * description: prints an alphabet ten times
 * Return: Always return 0 Success
 */
void print_alphabet_x10(void)
{
	int i;

	while (i <= 10)
	{
		char q;

		for (q = 'a'; q <= 'z'; q++)
		{
			_putchar(q);
		}

		i++;
	}
	_putchar('\n');
}
