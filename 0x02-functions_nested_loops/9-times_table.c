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
	int i, y;

	for (i = 0; i <= 9; i++)
	{
		for (y = 0; y <= 9; y++)
		{
			int x = (y * i);

			_putchar(x);
		}
	}
}
