#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Function
 *
 * Description: Allocates memory for an array, using malloc.
 *
 * @nmemb: Number of elements of the array.
 * @size: Size of each element in the array.
 *
 * Return: Pointer to the new array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = malloc(nmemb * size);
	unsigned int i;

	if (array == NULL)
	return (NULL);
	if (nmemb == 0 || size == 0)
	return (NULL);
	for (i = 0; i < nmemb * size; i++)
	*((char *)(array) + i) = 0;
	return (array);
}
