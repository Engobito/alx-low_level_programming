#include "main.h"

/**
 * _puts - the function that print the string
 *
 * @str: the string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
