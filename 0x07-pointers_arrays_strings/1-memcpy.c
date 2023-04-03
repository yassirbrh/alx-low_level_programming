#include "main.h"
/**
 * _memcpy -Function
 *
 * Description: Copies memory area.
 *
 * @dest: Pointer to the resulting string.
 * @src: Pointer to the source string.
 * @n: Number of bytes from memory area src to copy into dest
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
