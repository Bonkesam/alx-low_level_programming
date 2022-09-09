#include <stdio.h>

/**
 * main - Alphebet
 *
 * Description: Prints all lower case alphabet
 * Return: returns zero
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
