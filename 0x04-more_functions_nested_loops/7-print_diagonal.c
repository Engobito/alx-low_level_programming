#include "main.h"
#include <ctype.h>

/**
 * print_diagonal - the function that print digonal shape
 *
 * @n: the times
*/

void print_diagonal(int n)
{
	int dig, times = n, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dig = 1; dig <= n; dig++)
		{
			for (i = 1; i <= dig; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
