#include "lists.h"

/**
 * list_len - returns a number of elements of list_t
 *@h: head
 * Return: count
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t count;

	tmp = h;

	for (count = 0; tmp != NULL; count++)
	{
		tmp = tmp->next;
	}
	return (count);
}
