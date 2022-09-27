#include "main.h"

/**
 * _strspn - searches a string for a number of bytes
 * @s: string to be checked
 * @accept: string for rechecking
 *
 * Return: Number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
