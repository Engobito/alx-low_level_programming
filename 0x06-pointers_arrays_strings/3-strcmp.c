#include "main.h"
#include <string.h>

/**
 * _strcmp - the function that strcat two arrays
 *
 * @s1: the string one
 * @s2:  the string 2
 *
 * Return: 1 if true , 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
		}
		s1++;
		s2++;
	}
	return (equal);
}