#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Function
 *
 * Description: Creates a file.
 *
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string.
 *
 * Return: 1 (Success)
 *        -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int flags = O_CREAT | O_TRUNC | O_WRONLY;
	int i = 0;
	char character;

	if (filename == NULL)
		return (-1);
	fp = open(filename, flags, 0600);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + i) != '\0')
		{
			character = *(text_content + i);
			if (write(fp, &character, 1) == 0)
				return (-1);
			i++;
		}
	}
	close(fp);
	return (1);
}
