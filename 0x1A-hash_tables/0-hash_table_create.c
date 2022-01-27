#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * size- the size of the array.
 * Return:  a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hash;
	unsigned long int idx;

	hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
	{
		return (NULL);
	}
	hash->size = size;
	hash->array = malloc(sizeof(hash_table_t *) * size);

	if (hash->array == NULL)
	{
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
		hash->array[idx] = NULL;
	return (hash);
}

