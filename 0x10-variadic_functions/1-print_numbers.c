#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function
 *
 * Description: Prints numbers, followed by a new line.
 *
 * @separator: The string to separate numbers with.
 * @n: The number of integers passed to the function.
 *
 * Return: No return because it's a void function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != n - 1)
		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
