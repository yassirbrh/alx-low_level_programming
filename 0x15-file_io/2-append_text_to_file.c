#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Function
 *
 * Description: Appends text at the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: A NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success.
 *        -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int flags = O_APPEND | O_WRONLY | O_CREAT, i = 0;
	char character;

	if (filename == NULL)
	return (-1);
	fp = open(filename, flags);
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
