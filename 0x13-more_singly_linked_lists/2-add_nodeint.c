#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: first element of list
 * @n: element to be added
 * Return: total amount of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
