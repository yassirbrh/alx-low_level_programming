#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Function
 *
 * Description: Concatenates two strings.
 *
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Pointer to the new string (Success).
 *         NULL (Failure).
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *new_s;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	len1 = 0;
	while (*(s1 + len1) != '\0')
	len1++;
	len2 = 0;
	while (*(s2 + len2) != '\0')
	len2++;
	new_s = malloc(sizeof(char) * (len1 + len2 + 1));
	for (i = 0; i < len1; i++)
	*(new_s + i) = *(s1 + i);
	for (i = len1; i < len2 + len1; i++)
	*(new_s + i) = *(s2 + (i - len1));
	*(new_s + (len1 + len2)) = '\0';
	return (new_s);
}
