#include <stdio.h>

/**
 * main - lower case and uppercase
 *
 * Description: prints alphabet in both upper and lowe case then line
 * Return: Always returns 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
