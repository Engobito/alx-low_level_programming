#include "main.h"
#include <ctype.h>

/**
 * print_numbers - the function that prints numbers from 0 to 9
*/

void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
		_putchar(i + 48);
	_putchar('\n');
}
