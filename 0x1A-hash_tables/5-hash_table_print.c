#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: Hash table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	int flag = 1;

	if (!ht)
		return;
	putchar('{');
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag == 0)
			printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag = 0;
		}
		i++;
	}
	putchar('}');
	putchar('\n');
}
