#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings.
 *@s1: source.
 *@s2: destination.
 *@n: bytes of s2 to concatenate to s1.
 *Return: pointer shall point to a newly allocated space in memory,
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	char *m;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[i] != '\0'; i++, j++)
		;
	for (i = 0; s2[i] != '\0' && i < n; i++, j++)
		;
	m = malloc(sizeof(char) * j + 1);
	if (m == NULL)
		return (NULL);
	m[i] = '\0';

	j = 0;
	for (i = 0; s1[i] != '\0'; i++, j++)
		m[j] = s1[i];
	for (i = 0; s2[i] != '\0' && i < n; i++, j++)
		m[j] = s2[i];

	return (m);
}
