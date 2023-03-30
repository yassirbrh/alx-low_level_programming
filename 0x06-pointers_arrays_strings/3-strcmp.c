#include "main.h"
/**
 * _strcmp - Function
 *
 * Description: Compares two strings.
 *
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: 0 if the strings are identical
 *         Else if the strings are not identical
 */
int _strcmp(char *s1, char *s2)
{
	int len_comp, result, i, len_s1, len_s2;

	i = 0;
	len_s1 = 0;
	while (*(s1 + i) != '\0')
	{
		len_s1++;
		i++;
	}
	i = 0;
	len_s2 = 0;
	while (*(s2 + i) != '\0')
	{
		len_s2++;
		i++;
	}
	if (len_s1 > len_s2)
	len_comp = len_s1;
	else
	len_comp = len_s2;
	for (i = 0; i <= len_comp; i++)
	{
		if (*(s1 + i) == *(s2 + i))
		result = 0;
		else
		{
			result = (int)*(s1 + i) - (int) *(s2 + i);
			return (result);
		}
	}
	return (result);
}
