#include "main.h"

/**
 * print_sign - prints sign of characters
 * @n: the number under test
 *
 * description: checks the sign of numbers
 * Return: always return 1 if n is + and 0 if
 * n is zero and -1 if n is neg
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
}
