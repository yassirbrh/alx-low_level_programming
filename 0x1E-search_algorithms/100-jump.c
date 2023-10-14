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
	int n = (int)sqrt(size), i = 0, j;

	if (array == NULL)
		return (-1);
	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if ((array[i] <= value && array[i + n] >= value) || (int)(size - n) <= i)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + n);
			for (j = i; j <= i + n; j++)
			{
				if (j >= (int)size)
					return (-1);
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		if (i + n > (int)size)
			break;
		i += n;
	} while (i < (int)size);
	return (-1);
}
