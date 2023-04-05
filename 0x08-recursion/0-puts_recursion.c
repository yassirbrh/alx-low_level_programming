#include "main.h"
/**
 * _puts_recursion - Function
 *
 * Description: Prints a string, followed by a new line.
 *
 * @s: Pointer to the string to print.
 *
 * Return: No return because it's a void function.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
