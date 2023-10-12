#include "search_algos.h"
/**
 * jump_search - Function
 *
 * Description: Searches for a value in a sorted array of integers
 *              using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of the elements in the array.
 * @value: Value to look for in the array.
 *
 * Return: First index of the value if it is found.
 *         -1 if the element is not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int n = (int)sqrt(size), i, j;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i += n)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i + n] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + n);
			for (j = i; j <= i + n; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		if (i + n > (int)size)
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", i, i + n);
	for (j = i; j < (int)size; j++)
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
	return (-1);
}
