#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function
 *
 * Description: Frees a 2 dimensional grid previously created by
 *              my alloc_grid function.
 * @grid: 2 dimensional grid.
 * @height: It's height.
 *
 * Return: No return because it's a void function.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(*(grid + i));
	free(grid);
}
