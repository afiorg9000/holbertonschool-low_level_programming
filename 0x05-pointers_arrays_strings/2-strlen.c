#include "main.h"

/**
 *_strlen - returns the length of a string.
 *@s: string to get the length of.
 * Return: length off string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
