#include "main.h"
/**
 * print_diagsums - Function
 *
 * Description: Prints the sum of the two diagonals of a square matrix of int.
 *
 * @a: matrix of integers
 * @size: number of rows and columns.
 *
 * Return: No return because it's a void function
 */
void print_diagsums(int *a, int size)
{
	int i, diagonal;

	diagonal = 0;
	for (i = 0; i < size; i++)
	diagonal += *(a + size * i + i);
	printf("%d, ", diagonal);
	diagonal = 0;
	for (i = 0; i < size; i++)
	diagonal += *(a + size * i + size - 1 - i);
	printf("%d\n", diagonal);
}
