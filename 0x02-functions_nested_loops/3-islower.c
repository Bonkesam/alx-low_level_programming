#include "file"

/**
 * _islower - function to checks alphabet
 * @c: the alphabet to be checked
 *
 * description: Checks whether an alphabet is in lowercase
 * Return: always rturn 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
