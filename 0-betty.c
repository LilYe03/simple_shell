#include <unistd.h>

/*
 * write - A code that passes the betty check
 *
 * Return: 0
 */

int main(void)
{
	char *msg = "Hello, World!\n";
	write(STDOUT_FILENO, msg, 14);
	return (0);
}
