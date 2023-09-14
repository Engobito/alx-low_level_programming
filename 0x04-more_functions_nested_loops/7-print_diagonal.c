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

	if (times == 0)
	{
	_putchar('\n');
	return;
	}
	for (dig = 1; dig <= times; dig++)
	{
		_putchar('\\');
		if (dig != times)
		{
			_putchar('\n');
		}
		for (i = 0; i < dig; i++)
		{
			_putchar(' ');
		}
	}
}
