#include "main.h"

/**
 * largest_number - brings back the largest nu
 * @a: First intager
 * @b: Second Intager
 * @c: Third Intager
 *
 * Description: The program will scan and return
 * largest number
 * Return: Always return largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
