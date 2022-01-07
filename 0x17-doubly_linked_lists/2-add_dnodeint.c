#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the head of the linked list.
 * @n: node data.
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *ptr = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (ptr != NULL)
	{
		new->next = ptr;
		ptr->prev = new;
	}
	else
		new->next = NULL;
	*head = new;
	return (new);
}
