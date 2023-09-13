#include <stdio.h>
#include "main.h"

/**
 * print_sign - A function that found the sign of number
 *
 * @n: The number
 *
 * Return: 1 is number is positive
 *         -1 is number is negative
 *         0 is number is zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
