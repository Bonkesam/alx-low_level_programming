#include "main.h"

/**
 * times_table - mathematical table
 *
 * description: prints the 9 times table st
 * arting from 0
 * Return: Returns nothing
 */

void times_table(void)
{
	int i, y, x;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			x = (y * i);

			if (x <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
