#include "hash_tables.h"

/**
 * key_index - Function
 *
 * Description: Gives the index of a key.
 *
 * @key: The key
 * @size: Size of the hash table
 *
 * Return: Returns the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index %= size;
	return (index);
}
