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
	int i, len_src;
	
	i = 0;
	len_src = 0;
	while (*(src + i) != '\0')
	{
		len_src++;
		i++;
	}
	if (n > len_src)
	n = len_src;
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	if (n == len_src)
	*(dest + n) = '\0';
	return (dest);
}
