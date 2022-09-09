#include <stdio.h>

/**
 * main - prints alphabet
 *
 * Return: Always return zero
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
			continue;
		else if (i == 'q')
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
