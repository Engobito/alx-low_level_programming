#include "main.h"
#include <ctype.h>

/**
 * print_square - the function that print.
 *
 * @size: the size of squre.
 *
 * Return: Always 0.
*/

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j <= size; j++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
		_putchar('\n');
		}
	}
}
