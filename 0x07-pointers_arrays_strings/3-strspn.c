#include "main.h"

/**
 *_strspn -gets length of a prefix substring.
 *@s: string.
 *@accept: bytes composing prefix.
 *Return: the number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		i++;
	}
	return (i);
}
