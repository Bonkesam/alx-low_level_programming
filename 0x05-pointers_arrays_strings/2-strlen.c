#include "main.h"

/**
 * _strlen - returns length of str
 * @s: the string
 *
 * Return: Always return len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
