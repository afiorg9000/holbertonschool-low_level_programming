#include "lists.h"

/**
  * get_nodeint_at_index - Return the nth node of a listint_t linked list.
  * @head: Pointer of struct list_t
  * @index: Index of the node
  *
  * Return: Return (NULL) if node does not exist, otherwise the number.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}

	if (head == NULL)
		return (NULL);
	else
		return (head);
}
