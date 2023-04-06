#include "main.h"
#include <stdlib.h>
/**
 * strlen_recursion - Function
 *
 * Description: Returns the length of a string.
 *
 * @s: Pointer to the string.
 *
 * Return: The length of a string.
 */
int strlen_recursion(char *s)
{
	if (*s != '\0')
	return (strlen_recursion(s + 1) + 1);
	else
	return (0);
}

/**
 * strcpy_recursion - Function
 *
 * Description: Copy a string in another variable.
 *
 * @dest: Pointer to the destination.
 * @src: Pointer to the source.
 *
 * Return: No return because it's a void function.
 */
void strcpy_recursion(char *dest, char *src)
{
	if (*src == '\0')
	*dest = '\0';
	else
	{
		*dest = *src;
		strcpy_recursion(dest + 1, src + 1);
	}
}
/**
 * rev_string - Function
 *
 * Description: Reverse a string recursively.
 *
 * @s: Pointer to the source.
 * @p: Pointer to the destination.
 * @len: length of the string.
 *
 * Return: No return because it's a void function.
 */
void rev_string(char *s, char *p, int len)
{
	if (*s == '\0')
	p[strlen_recursion(p)] = '\0';
	else
	{
		p[len - 1] = *s;
		rev_string(s + 1, p, len - 1);
	}
}
/**
 * strcmp_recursion - Function
 *
 * Description: Compares between two strings.
 *
 * @s: Pointer to the first string.
 * @p: Pointer to the second string.
 *
 * Return: 1 if the strings are similar.
 *         0 if the strings are not.
 */
int strcmp_recursion(char *s, char *p)
{
	if (*s != *p)
	return (0);
	else if (*s == '\0')
	return (1);
	else
	return (strcmp_recursion(s + 1, p + 1));
}
/**
 * is_palindrome - Function
 *
 * Description: Checks if a string is palindrome or not.
 *
 * @s: Pointer to the string.
 *
 * Return: 1 if a string is a palindrome.
 *         0 if not.
 */
int is_palindrome(char *s)
{
	char *rev_s = malloc(strlen_recursion(s) + 1);

	strcpy_recursion(rev_s, s);
	rev_string(s, rev_s, strlen_recursion(s));
	return (strcmp_recursion(s, rev_s));
}
