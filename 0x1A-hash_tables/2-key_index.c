#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: key
 * @size: the size of the array of the hash table.
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;
	int idx;

	for (idx = 0; key[idx] != '\0'; idx++)
	{
		hash += key[idx];
	}
	return (hash % size);
}
