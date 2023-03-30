#include "main.h"
/**
 * _strncpy - Function
 *
 * Description: Copies a string within n bytes from src
 *
 * @dest: Pointer to the result string
 * @src: Pointer to the source string
 * @n: number of bytes to copy from string
 *
 * Return: Pointer to the result string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
