#include <unistd.h>

/**
 * main - entry point for the program.
 *
 * Description: This program prints "Hello, World!" to the standard output.
 * Return: Always return 0 on success
 */

int main(void)
{
	char *msg = "Hello, World!\n";

	write(STDOUT_FILENO, msg, 14);

	return (0);
}
