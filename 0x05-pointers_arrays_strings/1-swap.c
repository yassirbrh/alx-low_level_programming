#include "main.h"

/**
 * swap_int - Function
 *
 * Description: Swaps the values of two integers
 *
 * @a: First pointer to an integer
 * @b: Second pointer to an integer
 *
 * Return: No return because it's a void function
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
