#include "main.h"

/**
 * string_toupper - Changers str to uppercase
 * @str: Param
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
