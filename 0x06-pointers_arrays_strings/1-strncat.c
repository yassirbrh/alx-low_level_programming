#include "main.h"
/**
 * _strncat - Function
 *
 * Description: Concatenates two strings.
 *
 * @dest: Pointer to the string to append.
 * @src: Pointer to the string to add.
 * @n: bytes used from src.
 *
 * Return: dest the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, len_src, i;

	len_dest = 0;
	len_src = 0;
	while (*(dest + len_dest) != '\0')
	len_dest++;
	while (*(src + len_src) != '\0')
	len_src++;
	if (n > len_src) 
	n = len_src;
	for (i = 0; i < n; i++)
	*(dest + (len_dest + i)) = *(src + i);
	len_dest += i + 1;
	*(dest + len_dest) = '\0';
	return (dest);
}
