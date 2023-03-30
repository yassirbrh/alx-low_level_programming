#include "main.h"
/**
 * reverse_array - Function
 *
 * Description: Reverses the content of an array of integers
 *
 * @a: Pointer to the array
 * @n: Size of the array
 *
 * Return: No return because it's a void function
 */
void reverse_array(int *a, int n)
{
	int i, buff;

	for (i = 0; i < (n / 2) + (n % 2); i++)
	{
		buff = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = buff;
	}
}
