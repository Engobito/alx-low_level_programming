#include "main.h"
#include <ctype.h>

/**
 * more_numbers - that function print 1 to 14
 *		14 times.
*/

void more_numbers(void)
{
	int times, i;

	for (times = 0; times < 10; times++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
