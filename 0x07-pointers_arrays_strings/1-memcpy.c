#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 *
 * Return: Pointer to the copied mem block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
