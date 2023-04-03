#include "main.h"
/**
 * _strspn - Function
 *
 * Description: Gets the length of a prefix substring.
 *
 * @s: Pointer to the string
 * @accept: The bytes which should @s consist only of.
 *
 * Return: The length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, i, j, matched;

	i = 0;
	len = 0;
	while (*(s + i) != '\0')
	{
		matched = 0;
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			matched = 1;
			j++;
		}
		if (matched == 0)
		return (len);
		else
		len++;
		i++;
	}
	return (len);
}
