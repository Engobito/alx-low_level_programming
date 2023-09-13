#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>

/**
 * _abs - the function that abs the value of integer
 *
 * @n : the integer value
 *
 * Return: Alawys n (Success)
*/

int _abs(int n)
{
	if (n < 0)
	{
	n = n * -1;
	}
	return (n);
}
