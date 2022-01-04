#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	
	dlistint_t *end = malloc(sizeof(dlistint_t));

	if (end == NULL)
		return (NULL);

	if (head != NULL)
	{
		end->n = n;
		end->next = *head;
		end->prev = NULL;
		*head = end;
	}
	else
	{
		end->n = n;
		end->prev = (*head)->prev;
		end->next = *head;
		(*head)->prev = end;
		*head = end;
	}
	return (end);

