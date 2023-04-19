#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Function
 *
 * Description: Searches for an integer.
 *
 * @array: Pointer to an array of integers.
 * @size: Size of the array.
 * @cmp: Pointer to a function.
 *
 * Return: index of an element if the cmp does not return 0
 *         -1 if no element matches or size is less or equal than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)) != 0)
			return (i);
		}
	}
	return (-1);
}
