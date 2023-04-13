#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function
 *
 * Description: Allocates memory using malloc.
 *
 * @b: The size of memory allocation.
 *
 * Return: Pointer to a non-type.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	exit(98);
	return (p);
}
