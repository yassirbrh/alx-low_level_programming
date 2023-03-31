#include "main.h"
/**
 * rot13 - Function
 *
 * Description: Encodes a string using rot13.
 *
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91))
		{
		if ((str[i] > 109 && str[i] < 123) || (str[i] > 77 && str[i] < 91))
		{
			str[i] -= 13;
			break;
		}
		str[i] += 13;
		break;
		}
		i++;
	}
	return (str);
}
