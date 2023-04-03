#include "main.h"
/**
 * _strstr - Function
 *
 * Description: Locates a substring.
 *
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the string to search for in @haystack
 *
 * Return: Pointer to the beginning of the located substring.
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, matched;

	i = 0;
	while (*(haystack + i) != '\0')
	{
		j = 0;
		matched = 1;
		while (*(needle + j) != '\0')
		{
			if (*(haystack + i + j) != *(needle + j))
			matched = 0;
			j++;
		}
		if (matched == 1)
		return (haystack + i);
		i++;
	}
	return (NULL);
}
