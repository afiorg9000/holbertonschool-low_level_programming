#include "lists.h"

/**
 * sum_dlistint - adds all the data of a doubly linked list
 * @head: the head of a list
 *
 * Return: the sum of all the data of the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	for (node = head; node != NULL; node = node->next)
		sum += node->n;
	return (sum);
}
