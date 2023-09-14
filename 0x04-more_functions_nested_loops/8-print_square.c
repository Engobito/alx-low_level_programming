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
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
