#include "main.h"
#include <ctype.h>

/**
 * print_line - the function that prints the space.
 *
 * @n: the value.
*/

void print_line(int n)
{
	int lnchar;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lnchar = 1; lnchar <= n; lnchar++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
