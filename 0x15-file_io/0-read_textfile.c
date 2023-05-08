#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Function
 *
 * Description: Reads a text file and prints it to the POSIX standard output.
 *
 * @filename: Name of the file to read.
 * @letters: Number of characters it should be printed.
 *
 * Return: The actual number of letters it could read and print.
 *         0 if the filename is NULL or file can't be opened.
 *         0 if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t i = 0;
	char ch;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	ch = fgetc(fp);
	while (ch != EOF && i < letters)
	{
		if (write(1, &ch, 1) == 0)
			return (0);
		i++;
		ch = fgetc(fp);
	}
	fclose(fp);
	return (i);
}
