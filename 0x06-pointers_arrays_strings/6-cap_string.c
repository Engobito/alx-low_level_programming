#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * islower - the function that strcat two arrays
 *
 * @c: the string one
 *
 * Return: c always
 */

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - the function that strcat two arrays
 *
 * @c: the string one
 *
 * Return: 1 or 0
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - the function that strcat two arrays
 *
 * @s: the string one
 *
 * Return: c always
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (islower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
