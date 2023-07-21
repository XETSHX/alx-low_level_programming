#include <unistd.h>
#include "main.h"

/**
 * _putchar - Custom putchar function
 * @c: The character to be printed
 *
 * Return: On success, returns the character to be printed.
 * On error, returns -1 and sets errno appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
    /* Implementation of the _putchar function */
    /* ... */
}
