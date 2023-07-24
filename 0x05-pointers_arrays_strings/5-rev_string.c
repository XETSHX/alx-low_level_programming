#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
**/

void rev_string(char *s)
{
	int x, i;
	char temp;

	for (x = 0; s[x] != '\0'; ++x)
		;
	for (i = 0; i < x / 2; i++)
	{
		temp = s[i];
		s[i] = s[x - 1 - i];
		s[x - 1 - i] = temp;
	}
}
