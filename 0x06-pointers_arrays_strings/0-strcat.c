#include "main.h"
#include <string.h>

/**
 * _strcat - the function that strcat two arrays
 *
 * @dest: the string one
 * @src:  the string 2
 *
 * Return: dest always
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
