#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *
 *@n: pointer.
 *Return: n
 */

char *string_toupper(char * i)
{

	int j;

	j = 0;
	while (i[j] != '\0')
	{
		if (i[j] >= 'a' && i[j] <= 'z')
			i[j] = i[j] - 32;
		j++;
	}
	return (i);
}
