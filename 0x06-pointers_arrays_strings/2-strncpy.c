#include "main.h"
#include <cstring.h>

/**
 * _strncpy - Copys a string
 * @dest: First param
 * @src: Second Param
 * @n: Third param
 *
 * Return: Always return a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);

}
