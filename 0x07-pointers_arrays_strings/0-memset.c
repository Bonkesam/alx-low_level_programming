#include "main.h"

/**
 * _memset - fills the memory block with a constant byte.
 * @s: Address to the memory block
 * @b: Char to be used
 * @n: number of bytes to be used
 *
 * Return: Pointer to the block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
