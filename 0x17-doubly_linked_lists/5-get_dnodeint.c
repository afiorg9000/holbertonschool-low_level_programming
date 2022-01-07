#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node from the index of a linked list
 * @head: the head of a list
 * @index: a index of the node
 *
 * Return: the nth node of the linked list, or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int tmp;

	if (node == NULL)
		return (NULL);

	if (node != NULL)
	{
		for (tmp = 0; tmp < index; tmp++)/* */
		{
			if (node->next == NULL)
				return (NULL);

			node = node->next;
		}
	}
	return (node);
}
