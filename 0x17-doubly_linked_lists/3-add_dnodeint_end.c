#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a linked list.
 * @head: a list of elements with a pointer to the first element
 * @n: a string to create the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *ptr;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	new->prev = ptr;
	ptr->next = new;
	return (new);
}
