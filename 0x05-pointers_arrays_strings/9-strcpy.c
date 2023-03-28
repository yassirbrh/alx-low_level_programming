#include "main.h"
/**
 * _strcpy - Function
 *
 * Description: Function that copies the string pointed to by src
 *              including the terminating null byte (\0)
 *              to the buffer pointed to by dest.
 *
 * @dest: Pointer to the destination.
 * @src: Pointer to the source.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
