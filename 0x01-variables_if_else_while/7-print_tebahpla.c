#include <stdio.h>

/**
* main - Entry point
*
* Description A C program
*
* Return: ALWAYS 0 (Success)
*/

int main(void)
{
	int digit = 122;

	while (digit >= 97)
	{
		putchar(digit);
		digit--;
	}
	putchar('\n');

	return (0);
}
