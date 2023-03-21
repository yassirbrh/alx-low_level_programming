#include "main.h"
/**
 * print_alphabet - function
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: No return because it's void function
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
