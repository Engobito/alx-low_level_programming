#include "main.h"
#include <string.h>

/**
 * _strncpy - the function that strcat two arrays
 *
 * @dest: the string one
 * @src:  the string 2
 * @n: integer n
 *
 * Return: dest always
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
