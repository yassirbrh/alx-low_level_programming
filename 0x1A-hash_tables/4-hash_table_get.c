#include "hash_tables.h"
/**
 * hash_table_get - Function
 *
 * Description: Retrieves a value associated with a key.
 *
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key
 *
 * Return: The value associated to the key.
 *         NULL if it couldn't find the key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	return (ht->array[index]->value);
}
