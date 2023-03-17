#include <unistd.h>
#include <string.h>
/**
 * main- Entry point
 *
 * Description: Prints the exact string with new line to the standard error.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char *message;

	message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, strlen(message) - 1);
	return (1);
}
