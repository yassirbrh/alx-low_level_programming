#include "main.h"
#include <stdlib.h>

/**
 * _strcat - Function
 *
 * Description: Concatenates two strings.
 *
 * @dest: Pointer to the string to append.
 * @src: Pointer to the string to add.
 *
 * Return: dest the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len_dest, len_src, i;

	len_dest = 0;
	len_src = 0;
	while (*(dest + len_dest) != '\0')
	len_dest++;
	while (*(src + len_src) != '\0')
	len_src++;
	for (i = 0; i <= len_src; i++)
	{
		*(dest + (len_dest + i)) = *(src + i);
	}
	return (dest);
}
