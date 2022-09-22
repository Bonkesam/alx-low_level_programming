#include "main.h"

/**
 * _strncat - Concatinates to certain byte
 * @dest: First param
 * @src: Second param
 * @n: Third Param
 *
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
