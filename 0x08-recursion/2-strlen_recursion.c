#include "main.h"
/**
 * _strlen_recursion - Function
 *
 * Description: Returns the length of a string.
 *
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	return (_strlen_recursion(s + 1) + 1);
	else
	return (0);
}
