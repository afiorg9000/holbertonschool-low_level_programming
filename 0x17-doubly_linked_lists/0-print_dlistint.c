#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * h: head.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
	printf("%d\n", h->n);
	n++;
	h = h->next;
	}
	return (n);
}
