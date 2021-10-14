#include "main.h"

/**
 *reverse_array - reverse array of integers.
 *@a: array.
 *@n: number of elements of an array.
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
