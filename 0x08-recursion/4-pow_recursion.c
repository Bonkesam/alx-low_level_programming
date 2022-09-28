#include "main.h"

/**
 * _pow_recursion - Returns x to pow y
 * @x: first param
 * @y: Second param
 *
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}