#include "hash_tables.h"

/**
 * hash_table_create - Function
 *
 * Description: Creates a hash table.
 *
 * @size: Size of the hash table
 *
 * Return: Pointer to the newly created hash table
 *         NULL if something goes wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	return (table);
}
