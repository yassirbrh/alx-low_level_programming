#include "main.h"
/**
 * leet - Function
 *
 * Description: Encodes a string into 1337.
 *
 * @str: Pointer to the string to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char leet_nums[] = {'4', '3', '0', '7', '1'};
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
			str[i] = leet_nums[j];
			j = 5;
			}
		}
		i++;
	}
	return (str);
}
