#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - that prints alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int i, z;

	for (z = 0; z < 10; z++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
	_putchar('\n');
	}
}
