#include "main.h"

/**
 * _strpbrk -  searches a str for a set of bytes
 * @s: string to search
 * @accept: String to check against
 *
 * Return: Pointer to bte in s, null if no matchh
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
