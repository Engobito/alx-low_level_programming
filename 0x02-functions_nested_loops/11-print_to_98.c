#include <stdio.h>
#include "main.h"

/**
 * to_98 - write numbers to 98
 *
 * @n: the number i start
*/
void to_98(int n)
{
	for (n; n <= 98; n++)
	{
	printf("%d", n);
		if (n != 98)
		{
		_putchar (',' + ' ');
		}
	}
}
