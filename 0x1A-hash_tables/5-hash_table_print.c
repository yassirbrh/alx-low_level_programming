#include "hash_tables.h"
/**
 * hash_table_print - Function
 *
 * Description: Prints all the elements in the hash table.
 *
 * @ht: The hash table to print
 *
 * Return: No return because it's a void function.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int for_comma = 0;

	printf("{");
	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			if (node != NULL)
			{
				if (for_comma == 1)
					printf(", ");
				while (node != NULL)
				{
					printf("'%s': ", node->key);
					printf("'%s'", node->value);
					node = node->next;
					if (node != NULL)
					printf(", ");
					for_comma = 1;
				}
			}
		}
	}
	printf("}\n");
}
