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
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *last_node;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	new_node->prev = last_node;
	last_node->next = new_node;
	return (new_node);
}
