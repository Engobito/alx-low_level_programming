#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - A function that found last digit of number
 *
 * @r: The number
 *
 * Return: Alawys r (Success)
*/

int print_last_digit(int r)
{
	int last_digit;

	if (r < 0)
		last_digit = -1 * (r % 10);
	else
		last_digit = r % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
