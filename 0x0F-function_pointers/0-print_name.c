#include "function_pointers.h"

/**
 * print_name - Function
 *
 * Description: Prints a name.
 *
 * @name: The name to print.
 * @f: Pointer to the function.
 *
 * Return: No return because it's a void function.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
