#include "hash_tables.h"

/**
 * hash_table_create - Create the hash table.
 * @size: Size of the table.
 *
 * Return: The hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t));
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < size; i++)
	{
		hashtable->array[i] = NULL;
	}
	return (hashtable);
}
