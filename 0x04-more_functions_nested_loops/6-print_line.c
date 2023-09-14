#include "main.h"
#include <ctype.h>

/**
 * print_line - the function that prints the space.
 *
 * @n: the value.
*/

void print_line(int n)
{
	int times, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (space = 1; space <= n; space++)
		{
			for (times = 1; times <= space; times++)
			{
				_putchar(' ');
				_putchar('\n');
			}
		}
	}
}
