#include "main.h"
#include <ctype.h>

/**
 * _isupper - the function that check if character is uppercase.
 *
 * @c: the character.
 *
 * Return: 1 if uppercase , 0 if lowercase.
*/

int _isupper(int c)
{
	if (isupper(c))
	{
	return (1);
	}
	return (0);
}
