#include "main.h"
#include <string.h>

/**
 * _strncat - the function that strcat two arrays
 *
 * @dest: the string one
 * @src:  the string 2
 * @n: integer number
 *
 * Return: dest always
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
