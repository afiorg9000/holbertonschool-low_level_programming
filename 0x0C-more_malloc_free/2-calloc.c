#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: number of members/blocks desired
 * @size: amount of bytes for each member/block
 * Return: pointer to new allocated memory, NULL if it fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);

	while (i < nmemb * size)
		m[i++] = 0;

	return (m);
}
