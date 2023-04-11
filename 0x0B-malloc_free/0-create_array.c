#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function
 *
 * Description: Creates an array of chars, and initializes it with a specific
 *              char.
 * @size: The size of the new created array.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array (Success).
 *         NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	return (NULL);
	if (size == 0)
	return (NULL);
	for (i = 0; i < size; i++)
	*(arr + i) = c;
	return (arr);
}
