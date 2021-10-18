#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - searches a string of any of a set of bytes.
 *@s: string.
 *@accept: string.
 *Return: a pointer to s that matches one of the bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
				return (s);
		}
		s++;
	}
	return (NULL);
}
