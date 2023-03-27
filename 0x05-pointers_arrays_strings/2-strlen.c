#include "main.h"

/**
 * _strlen - Function
 *
 * Description: Returns the length of a string
 *
 * @s: Pointer to a string
 *
 * Return: Returns the length of a string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
