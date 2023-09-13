#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - A Function that check if char is alphabet
 *
 * @c: A charcter
 *
 * Return: 1 if alphabet
 *         0 if other
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
