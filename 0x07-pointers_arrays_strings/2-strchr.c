#include "main.h"
/**
 * _strchr - Function
 *
 * Description: Locates a character in a string.
 *
 * @s: Pointer to the string.
 * @c: The character to locate in the string.
 *
 * Return: Pointer to the first occurrence of @c in the string @s.
 *         NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (s[i] == c)
		return (s + i);
		i++;
	}
	return (NULL);
}
