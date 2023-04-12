#include "main.h"
#include <stdlib.h>
/**
 * words_count - Function
 *
 * Description: Counts how many word in a string.
 *
 * @str: The string to check
 *
 * Return: Count of words in a string.
 */
int words_count(char *str)
{
	int words, i;

	i = words = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != ' ')
		{
			while (*(str + i) != ' ' && *(str + i) != '\0')
			i++;
			words++;
		}
		if (*(str + i) != '\0')
		i++;
	}
	return (words);
}
/**
 * allocate_string - Function
 *
 * Description: Allocate memory for strings.
 *
 * @str: Pointer to the string.
 * @tab: Pointer to the array of words.
 *
 * Return: No return because it's a void function.
 */
void allocate_string(char *str, char **tab)
{
	int i, t, length;

	i = t = length = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != ' ')
		{
			while (*(str + i) != ' ' && *(str + i) != '\0')
			{
				i++;
				length++;
			}
			*(tab + t) = malloc(sizeof(char) * (length + 1));
			t++;
			length = 0;
		}
		if (*(str + i) != '\0')
		i++;
	}
}
/**
 * _strlen - Function
 *
 * Description: Returns the length of a string.
 *
 * @str: The pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length;

	length = 0;
	while (*(str + length) != '\0')
	length++;
	return (length);
}
/**
 * strtow - Function
 *
 * Description: Splits a string into words.
 *
 * @str: The string to split.
 *
 * Return: The pointer to the array of strings. (Success)
 *         NULL (Failure)
 */
char **strtow(char *str)
{
	int i, j, t, tab_size;
	char **tab;

	if (str == NULL || _strlen(str) == 0 || str == " ")
	return (NULL);
	tab_size = words_count(str) + 1;
	tab = malloc(sizeof(char *) * tab_size);
	if (tab == NULL)
	return (NULL);
	allocate_string(str, tab);
	t = j = i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != ' ')
		{
			while (*(str + i) != ' ' && *(str + i) != '\0')
			{
				tab[t][j] = *(str + i);
				j++;
				i++;
			}
			tab[t][j] = '\0';
			t++;
			j = 0;
		}
		if (*(str + i) != '\0')
		i++;
	}
	tab[tab_size - 1] = NULL;
	return (tab);
}
