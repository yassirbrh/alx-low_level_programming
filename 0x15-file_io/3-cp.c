#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * _strlen - Function
 *
 * Description: Returns the length of a string.
 *
 * @str: Pointer to the string.
 *
 * Return: The length of a string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}
/**
 * close_error - Function
 *
 * Description: Checks if close gets error
 *
 * @fp1: The first file descriptor to check.
 * @fp2: The second file descriptor to check.
 *
 * Return: No return because it's a void function.
 */
void close_error(int fp1, int fp2)
{
	if (close(fp1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp1);
		exit(100);
	}
	if (close(fp2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp2);
		exit(100);
	}
}
/**
 * main - Entry point
 *
 * Description: Copies the content of a file to another file.
 *
 * @argc: The number of arguments.
 * @argv: List of file names.
 *
 * Return: 0 Always (Success).
 */
int main(int argc, char **argv)
{
	int fp1, fp2, flags = O_CREAT | O_RDONLY;
	int flags2 = O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, rd;
	char *buffer = malloc(1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp1 = open(argv[1], flags);
	if (fp1 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp2 = open(argv[2], flags2, 0664);
	if (fp2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		rd = read(fp1, buffer, sizeof(buffer));
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (write(fp2, buffer, rd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (rd == sizeof(buffer));
	close_error(fp1, fp2);
	return (0);
}
