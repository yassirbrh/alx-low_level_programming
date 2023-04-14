#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Function
 *
 * Description: Reallocates a memory block using malloc and free.
 *
 * @ptr: Block of memory to reallocate.
 * @old_size: Old size of the memory block.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	return (NULL);
	for (i = 0; i < old_size; i++)
	{
		if (i == old_size)
		break;
		*((char *)(new_ptr) + i) = *((char *)(ptr) + i);
	}
	free(ptr);
	return (new_ptr);
}
