#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function
 *
 * Description: Prints strings, followed by a new line.
 *
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: No return because it's a void function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
		printf("%s", str);
		else
		printf("(nil)");
		if (separator != NULL && i != n - 1)
		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
