#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out number combinations
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int i, q;

	for (i = 0; i < 9; i++)
	{
		for (q = i + 1; q < 10; q++)
		{
			putchar((i % 10) + '0');
			putchar((q % 10) + '0');

			if (i == 8 && q == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
