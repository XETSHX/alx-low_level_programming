#include "main.h"
#include <stddef.h>

/**
* main - Entry point
*
* Description A C program
*
* Return: ALWAYS 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	size_t i;

	for (i = 0; i < sizeof(str) - 1 ; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
