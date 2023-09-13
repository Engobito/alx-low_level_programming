#include <stdio.h>
#include "main.h"

/**
 *  print_to_98 - write numbers to 98
 *
 * @n: the number i start
*/
void print_to_98(int n);
{
	for (n; n <= 98; n++)
	{
	printf("%d", n);
		if (n != 98)
		{
		_putchar(',' + ' ');
		}
	}
	_putchar('\n');
}
