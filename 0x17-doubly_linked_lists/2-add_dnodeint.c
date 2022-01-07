#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the head of the linked list.
 * @n: new node data.
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *prev_node = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (prev_node != NULL)
	{
		new_node->next = prev_node;
		prev_node->prev = new_node;
	}
	else
		new_node->next = NULL;
	*head = new_node; 
	return (new_node);
}
