#include "main.h"
#include <stdlib.h>
/**
 * array_range - Function
 *
 * Description: Creates an array of integers.
 *
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 *
 * Return: Pointer to the new array.
 */
int *array_range(int min, int max)
{
	int i, num;
	int *array;

	if (min > max)
	return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	return (NULL);
	num = min;
	for (i = 0; i < (max - min + 1); i++)
	array[i] = num++;
	return (array);
}
