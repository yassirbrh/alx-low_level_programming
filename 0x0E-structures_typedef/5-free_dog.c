#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Function
 *
 * Description: Frees dogs.
 *
 * @d: Pointer to the dog_t pointer.
 *
 * Return: No return because it's a void function.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		free(d->name);
		if (d->owner != NULL)
		free(d->owner);
		free(d);
	}
}
