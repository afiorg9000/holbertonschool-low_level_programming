#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 *
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		len++;
	}
	return (len);
}
