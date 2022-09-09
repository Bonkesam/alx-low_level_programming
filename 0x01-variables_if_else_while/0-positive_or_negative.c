#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*More headers goes here*/

/**
 * main - Execute random number
 *
 * Description: Executes numbers and runs them through if statements
 * Return: Always returns 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
