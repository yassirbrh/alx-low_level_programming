#include "main.h"
/**
 * cap_string - Function
 *
 * Description: Capitalizes all words of a string.
 *
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i, j;
	char *separators = ",;!?\"(){}\n\t. ";

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t')
		str[i] = ' ';
		for (j = 0; j < 13; j++)
		{
			if (str[i] == separators[j])
			{
				j = 13;
				if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
