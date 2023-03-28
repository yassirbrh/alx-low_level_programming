#include "main.h"
#include <stdio.h>
/**
 * print_array - Function
 *
 * Description: Prints n elements of an array of integers
 *
 * @a: Pointer to an array of integers
 * @n: Number of elements
 *
 * Return: No return because it's a void function
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		printf(", ");
	}
	printf("\n");
}
