#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Function
 *
 * Description: Returns the length of a string.
 *
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	i++;
	return (i);
}
/**
 * string_nconcat - Function
 *
 * Description: Concatenates two strings.
 *
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * @n: bytes from s2.
 *
 * Return: Pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int new_str_len;
	unsigned int i;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	if (n > _strlen(s2))
	n = _strlen(s2);
	new_str_len = n + _strlen(s1);
	new_str = malloc(sizeof(char) * (new_str_len + 1));
	if (new_str == NULL)
	return (NULL);
	for (i = 0; i < _strlen(s1); i++)
	*(new_str + i) = *(s1 + i);
	for (i = _strlen(s1); i < new_str_len; i++)
	*(new_str + i) = *(s2 + (i - _strlen(s1)));
	*(new_str + new_str_len) = '\0';
	return (new_str);

}
