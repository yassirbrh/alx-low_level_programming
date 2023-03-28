#include "main.h"
/**
 * puts_half - Function
 *
 * Description: Prints half of a string
 *
 * @str: Pointer to a string
 *
 * Return: No return because it's a void function
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	for (j = (i - (i % 2)) / 2; j < i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
