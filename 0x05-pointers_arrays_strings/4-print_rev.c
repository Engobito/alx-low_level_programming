#include "main.h"

/**
 * print_rev - the function that rev the string
 *
 * @s: the string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
