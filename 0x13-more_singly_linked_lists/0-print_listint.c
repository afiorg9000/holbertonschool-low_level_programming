#include "lists.h"

/**
 * print_listint - prints list.
 * @h: pointer.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}

