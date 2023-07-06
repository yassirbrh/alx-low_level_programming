#include "hash_tables.h"
/**
 * hash_table_set - Function
 *
 * Description: Adds an element to the hash table.
 *
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key
 * @value: The value associated to the key.
 *
 * Return: 1 if it successed
 *         0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
	}
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
