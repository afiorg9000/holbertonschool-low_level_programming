#include "function_pointers.h"

/**
 * array_iterator - executes each element of the array.
 * @array: array of int.
 * @size: size of the array.
 * @action: pointer to a function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)

	for (i = 0; i < size; i++)
	{
		action(*array), array++;
	}
}
