#include "main.h"
/**
 * string_toupper - Function
 *
 * Description: Changes all lowercase letters of a string to uppercase.
 *
 * @str: Pointer to the string.
 *
 * Return: Pointer to the string.
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		str[i] -= 32;
		i++;
	}
	return (str);
}
