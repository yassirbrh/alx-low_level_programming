#include "search_algos.h"
/**
 * print_arr - Function
 *
 * Description: Prints the array we're searching in.
 *
 * @array: Pointer to the first element in the array.
 * @size: Number of the elements in the array.
 *
 * Return: No return because it's a void function.
 */
void print_arr(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: %d", array[0]);
	for (i = 1; i < size; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
}
/**
 * binary_search - Function
 *
 * Description: Searches for a value in a sorted array of integers
 *              using the Binary search algorithm.
 *
 * @array: Pointer to the first element in the array.
 * @size: Number of the elements in the array.
 * @value: Value to look for in the array.
 *
 * Return: First index found of the element.
 *         -1 if the array is NULL or the value is not found.
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);
	
	print_arr(array, size);
	if (size == 2)
	{
		if (array[0] == value)
		{
			print_arr(array, 1);
			return (1);
		}
		else if (array[1] == value)
		{
			print_arr(array + 1, 1);
			return (2);
		}
		if (array[0] < value)
		{
			print_arr(array + 1, 1);
			return (-1);
		}
		else
		{
			print_arr(array, 1);
			return (-1);
		}
	}
	if (size % 2 == 0)
	{
		if (array[size / 2] <= value)
		{
			index = binary_search(array + (size / 2), size / 2, value);
			if (index != -1)
				return ((size / 2) + index);
			return (-1);
		}
		else if (array[size / 2] >= value)
			return (binary_search(array, size / 2 - 1, value));
	}
	else
	{
		if (array[(size - 1) / 2] <= value)
		{
			index = binary_search(array + ((size - 1) / 2) + 1, (size - 1) / 2, value);
			if (index != -1)
				return (((size - 1 )/ 2) + index);
			return (-1);
		}
		else if (array[(size - 1) / 2] >= value)
			return (binary_search(array, (size - 1) / 2, value));
	}
	return (-1);
}
