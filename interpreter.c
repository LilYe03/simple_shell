#include <unistd.h>
#include <stdio.h>

/**
 *_getenv - Write a UNIX command line interpreter
 *
 * @d: name of the pointer
 * Return: NULL
 */
char *_getenv(const char *name)
{
	int d, result;

	for (d = 0; environ[d]; id+)
	{
		result = _PATHstrcmp(name, environ[d]);
		if (result == 0)
		{
			return (environ[d]);
		}
	}
	return (NULL);
}
