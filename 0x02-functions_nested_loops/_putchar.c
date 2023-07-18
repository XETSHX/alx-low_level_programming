#include <unistd.h>

/**
 * _putchar - writes a character to standard output
 * @c: character to print
 * Return: on success 1
 *	on error -1
**/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
