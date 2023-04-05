#include "main.h"
/**
 * _print_rev_recursion - Function
 *
 * Description: Prints a string in reverse
 *
 * @s: Pointer to the string.
 *
 * Return: No return because it's a void function
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	_print_rev_recursion(s + 1);
	s = s - 1;
	_putchar(*s);
}
