#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function
 *
 * Description: Returns a pointer to a newly allocated space in memory, which
 *              contains a copy of the string given as a parameter.
 * 
 * @str: The given string.
 *
 * Return: Pointer to the new string (Success).
 *         NULL if str=NULL
 */
char *_strdup(char *str)
{
	int len, i;
	char *new_str;

	len = 0;
	while (*(str + len) != '\0')
	len++;
	if (len == 0)
	return (NULL);
	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
	return (NULL);
	for (i = 0; i < len; i++)
	*(new_str + i) = *(str + i);
	return (new_str);
}
