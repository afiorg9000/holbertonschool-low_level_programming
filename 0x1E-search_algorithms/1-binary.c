#include "search_algos.h"
/**
  * binary_search - searches for a value in a sorted array of integers.
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  * Return:  return the index where value is located
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0, mid, right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (left < right)
	{
		printf("Searching in array: ");
		for (i = left; i < right - 1; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
