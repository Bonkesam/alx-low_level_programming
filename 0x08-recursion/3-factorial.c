#include "main.h"

/**
 * factorial - returns the factorial of a numbers
 * @n: number to find fact
 *
 * Return: Always return factorial of number
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
