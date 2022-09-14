#include "main.h"

/**
 * _abs - Checks absolute
 * @i: takes an intager
 *
 * Description: makes a number absolute and returns its absolute value
 * Return: Always return 0 (success)
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = (i * -1);
		return (i);
	}
	else
	{
		i = i;
		return (i);
	}

	return (0);
}
