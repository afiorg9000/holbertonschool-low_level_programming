#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers. new line.
 * @a: array.
 * @n: number of elements.
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
		printf("%d, ", a[b]);
	if (b != 0)
		printf("%d", a[b]);
	printf("\n");
}
