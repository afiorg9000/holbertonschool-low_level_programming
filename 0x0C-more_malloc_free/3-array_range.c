#include "main.h"
#include <stdlib.h>

/**
 * array_range -creates and array containing the integers between @min and @max
 * @min: smallest int in the array, first integer
 * @max: biggest value in the array, last integer
 *
 * Return: the pointer to the newly created array, NULL if it fails
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *m;

	if (min > max)
		return (NULL);

	m = malloc(sizeof(int) * (max - min + 1));
	if (m == NULL)
		return (NULL);

	while (min <= max)
		m[i++] = min++;

	return (m);
}
