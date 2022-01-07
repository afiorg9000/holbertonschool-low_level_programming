#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position of a
 * doubly linked list
 * @h: the head of a list
 * @idx: the index of the list where the new node should be added
 * @n: the piece of data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *buffnode = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		buffnode = buffnode->next;
		if (buffnode == NULL)
			return (NULL);
	}

	if (buffnode->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = buffnode;
	new->next = buffnode->next;
	buffnode->next->prev = new;
	buffnode->next = new;

	return (new);
}
