#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: the intager under test
 *
 * description: prints the last digit of a number
 * Return: Always return 0 (success)
 */

int print_last_digit(int i)
{
	int l;

	l = i % 10;

	if (l < 0)
	{
		l *= -1;
	}
	return (l);
}
