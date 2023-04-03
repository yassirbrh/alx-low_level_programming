#include "main.h"
/**
 * _strpbrk - Function
 *
 * Description: Searches a string for any of a set of bytes.
 *
 * @s: Pointer to the string.
 * @accept: The bytes which should @s consist only one of them..
 *
 * Return: Pointer to the byte in @s that matches one of the bytes in @accept.
 *         NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
		if (*(accept + j) == *(s + i))
		return (s + i);
		j++;
		}
		i++;
	}
	return (NULL);
}
