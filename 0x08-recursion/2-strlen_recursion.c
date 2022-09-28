#include "main.h"
/**
 * _strlen_recursion - Print length of string
 * @s: String to chaeck length
 *
 * Return:length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
