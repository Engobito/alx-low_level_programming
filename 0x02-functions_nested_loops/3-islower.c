#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *  _islower - that check is chracter is lowercase.
 *
 *  @c: the chracter
 *
 * Return: 1 if lower case
 *         0 if upper case
*/

int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
