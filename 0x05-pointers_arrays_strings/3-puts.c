#include "main.h"
/**
 * _puts - Function
 *
 * Description: Prints a string, followed by a new line
 *
 * @str: The string to print
 *
 * Return: No return because it's a void function
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
