#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function
 *
 * Description: Executes a function given as a parameter on each element
 *              of an array.
 *
 * @array: Pointer to an array of integers.
 * @size: size of an array.
 * @action: Pointer to a function.
 *
 * Return: No return because it's a void function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		action(*(array + i));
	}
}
