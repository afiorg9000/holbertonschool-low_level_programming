#include "lists.h"

/**
 * print_list - prints list
 * @h: pointer
 *
 * Return: The numbers of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *n;
	size_t i = 0;

	n = h;

	while (n != NULL)
	{
		if (n->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", n->len, n->str);
		n = n->next;
		i++;
	}


	return (i);
}
