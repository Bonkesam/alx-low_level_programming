#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints othr char
 * @str: string
 *
 * Return: Always return 0
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(*(str + i));
		}
		i++;
	}
	putchar(10);
}
