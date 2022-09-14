#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * description: prints an alphabet ten times
 * Return: Always return 0 Success
 */
void print_alphabet_x10(void)
{
	char q, i;

	while (i < 10)
	{
		for (q = 'a'; q <= 'z'; q++)
		{
			_putchar(q);
		}
		_putchar('\n');

		i++;
	}
}
