#include "hash_tables.h"
/**
 * hash_table_delete - Function
 *
 * Description: Deletes the hash table.
 *
 * @ht: The hash table to delete
 *
 * Return: No return because it's a void function.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *current;
	unsigned long int i;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			if (node != NULL)
			{
				while (node != NULL)
				{
					current = node;
					node = node->next;
					free(current->key);
					free(current->value);
					free(current);
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
