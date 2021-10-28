#include <stdlib.h>
#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * *malloc_checked - Allocates memory.
 * @b: unsigned int
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
