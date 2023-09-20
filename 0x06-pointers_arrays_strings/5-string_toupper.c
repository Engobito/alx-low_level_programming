#include "main.h"
#include <string.h>

/**
 * string_toupper - the function that strcat two arrays
 *
 * @str: the string one
 *
 * Return: str always
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
