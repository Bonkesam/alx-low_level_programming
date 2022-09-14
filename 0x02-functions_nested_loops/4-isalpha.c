#include "main.h"
/**
 * _isalpha - checks alphabet
 * @c: the character under test
 *
 * description: checks if a character is alphabet
 * Return: always return 1 (success) or 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
