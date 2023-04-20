#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function
 *
 * Description: Returns the sum of all its parameters.
 *
 * @n: The number of arguments in function.
 *
 * Return: The sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum;

	if (n == 0)
	return (0);
	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
