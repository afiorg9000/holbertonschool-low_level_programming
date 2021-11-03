#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: 
 * @size: number of elements in the array.
 * @cmp: pointer used to compare values.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count, a;
	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (count = 0; count < size; count++)
	{
		a = cmp(array[count]);

		if (a != 0)
		{
			return (count);
		}
	}
	return (-1);
}


