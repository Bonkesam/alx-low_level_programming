#include "main.h"

/**
 * _strdup - returns pointer to newly allocted space
 * @str: The copy of string
 *
 * Return: NULL id string is null or insufficiane memory,
 * returns pointer to duplicated string on sucess.
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		cpy[index] = str[index];

	cpy[len] = '\0';
	return (cpy);
}
