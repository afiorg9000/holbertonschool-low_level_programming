#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *buffnode = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (buffnode == NULL)
			return (-1);
		buffnode = buffnode->next;
	}

	if (buffnode == *head)
	{
		*head = buffnode->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		buffnode->prev->next = buffnode->next;
		if (buffnode->next != NULL)
			buffnode->next->prev = buffnode->prev;
	}

	free(buffnode);
	return (1);
}
