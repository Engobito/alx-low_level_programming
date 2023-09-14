#include "main.h"
#include <ctype.h>

/**
 * _isdigit - the function that check if c is digit.
 *
 * @c: the value.
 *
 * Return: 1 if Digit , 0 if other.
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
	return (1);
	}
	return (0);
}
