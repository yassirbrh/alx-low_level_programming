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
	int i;

	if (new_size == old_size)
	return (ptr);
}
