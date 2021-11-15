#include "lists.h"

/**
 * listint_len - returns a number of elements of listint_t.
 * @h: head
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
