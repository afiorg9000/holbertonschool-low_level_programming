#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the head of the linked list.
 * @n: new node data.
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*creates a new allocated node*/dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp_node = *head;

	if (head == NULL)
		return (NULL);
	/*assigns the node with data*/
	new_node->n = n;
	/*adds a new node at the beginning of the list*/new_node->prev = NULL;
	if (tmp_node != NULL)
	{
		new_node->next = tmp_node;
		tmp_node->prev = new_node;
	}
	else
		new_node->next = NULL;
	*head = new_node;
	return (new_node);
}
