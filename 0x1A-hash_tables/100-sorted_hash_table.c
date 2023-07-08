#include "hash_tables.h"

/**
 * shash_table_create - Function
 *
 * Description: Creates a sorted hash table.
 *
 * @size: Size of the sorted hash table
 *
 * Return: Pointer to the newly created sorted hash table
 *         NULL if something goes wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = (shash_table_t *)malloc(size * sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (shash_node_t **)malloc(size * sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->shead = table->stail = NULL;
	return (table);
}
/**
 * shash_table_set - Function
 *
 * Description: Adds an element to the sorted hash table.
 *
 * @ht: The sorted hash table you want to add or update the key/value to
 * @key: The key
 * @value: The value associated to the key.
 *
 * Return: 1 if it successed
 *         0 if it fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		node = ht->array[index];
		if (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
				free(node->value);
				node->value = strdup(value);
				return (1);
			}
			node = node->next;
		}
	}
	new_node = (shash_node_t *)malloc(sizeof(shash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->snext = new_node->sprev = NULL;
	ht->array[index] = new_node;
	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = ht->array[index];
		ht->stail = ht->shead;
		return (1);
	}
	if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
		return (1);
	}
	if (strcmp(ht->stail->key, key) < 0)
	{
		new_node->sprev = ht->stail;
		ht->stail->snext = new_node;
		ht->stail = new_node;
		return (1);
	}
	node = ht->shead->snext;
	while (node != ht->stail)
	{
		if (strcmp(node->key, key) > 0)
		{
			new_node->snext = node;
			new_node->sprev = node->sprev;
			node->sprev->snext = new_node;
			node->sprev = new_node;
			return (1);
		}
		node = node->snext;
	}
	return (0);
}
/**
 * shash_table_get - Function
 *
 * Description: Retrieves a value associated with a key.
 *
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key
 *
 * Return: The value associated to the key.
 *         NULL if it couldn't find the key.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - Function
 *
 * Description: Prints the elements in the sorted hash table in the order.
 *
 * @ht: The sorted hash table to print
 *
 * Return: No return because it's a void function.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int for_comma = 0;

	if (ht != NULL)
	{
		node = ht->shead;
		printf("{");
		while (node != NULL)
		{
			if (for_comma == 1)
				printf(", ");
			printf("'%s': ", node->key);
			printf("'%s'", node->value);
			for_comma = 1;
			node = node->snext;
		}
		printf("}\n");
	}
}
/**
 * shash_table_print_rev - Function
 *
 * Description: Prints the elements in the sorted hash table in reverse order.
 *
 * @ht: The sorted hash table to print
 *
 * Return: No return because it's a void function.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int for_comma = 0;

	if (ht != NULL)
	{
		node = ht->stail;
		printf("{");
		while (node != NULL)
		{
			if (for_comma == 1)
				printf(", ");
			printf("'%s': ", node->key);
			printf("'%s'", node->value);
			for_comma = 1;
			node = node->sprev;
		}
		printf("}\n");
	}
}
/**
 * shash_table_delete - Function
 *
 * Description: Deletes the sorted hash table.
 *
 * @ht: The sorted hash table to delete
 *
 * Return: No return because it's a void function.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *current;
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
