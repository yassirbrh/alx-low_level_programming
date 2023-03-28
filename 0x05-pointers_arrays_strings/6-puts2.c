#include "main.h"
/**
 * puts2 - Function
 *
 * Description: Prints every other character of a string.
 *
 * @str: Pointer to a string
 *
 * Return: No return because it's a void function.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 != 1)
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
