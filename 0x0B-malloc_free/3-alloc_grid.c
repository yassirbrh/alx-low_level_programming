#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Function
 *
 * Description: Returns a pointer to a 2 dimensional array of integers.
 *
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: Pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
	return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(arr + i) = malloc(sizeof(int) * width);
		if (*(arr + i) == NULL)
		{
			free(*(arr + i));
			return (NULL);
		}
		for (j = 0; j < width; j++)
		arr[i][j] = 0;
	}
	return (arr);
}
