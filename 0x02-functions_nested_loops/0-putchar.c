#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C program that prints a string
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

/**
 * _putchar - Custom putchar function
 * @c: The character to be printed
 *
 * Return: On success, returns the character to be printed.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
    /* Implementation of the _putchar function */
    /* ... */
}
}
