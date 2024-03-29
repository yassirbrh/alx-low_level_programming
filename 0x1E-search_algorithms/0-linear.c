#include "search_algos.h"
/**
 * linear_search - Function:
 *
 * Description: Searches for a value in an array of integers
 *              using the Linear search algorithm.
 *
 * @array: Pointer to the array to search the value in.
 * @size: The number of the elements in array.
 * @value: Value to search for in the array.
 *
 * Return: First index where the value is located.
 *         -1 if the array is NULL or the value not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
