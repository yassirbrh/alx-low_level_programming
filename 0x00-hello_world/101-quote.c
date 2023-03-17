#include <unistd.h>
/**
 * main- Entry point
 *
 * Description: Prints the exact string with new line to the standard error.
 *
 * Return: 0 (Success)
 */

int main(void)
{

	char *message = "C program that prints exactly and that piece of art is useful\" - Dora Korpar, 2015-10-19,";
	write(2,message,sizeof(message));
	return (1);
}
