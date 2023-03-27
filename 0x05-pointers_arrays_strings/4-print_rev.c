#include "main.h"
/**
 * print_rev - Function
 *
 * Description: Prints a string, in reverse, followed by a new line
 *
 * @s: Pointer to the string to print
 *
 * Return: No return it's because a void function
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	i++;
	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
