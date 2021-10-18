#include "main.h"

/**
 *_strchr - locates a character to a string.
 *@s: string.
 *@c: character.
 *Return: a pointer to the first occurrence of the character c in the string s,
 *or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int f;

	for (f = 0; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
		{
			return (s + f);
		}
	}
	return ('\0');
}
