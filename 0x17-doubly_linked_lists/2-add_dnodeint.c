#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the head.
 * @n: node.
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (head != NULL)
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->n = n;
		new->prev = (*head)->prev;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
