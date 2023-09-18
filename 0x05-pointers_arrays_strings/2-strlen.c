#include "main.h"

/**
 * _strlen - the function thet return the lenght of the string
 *
 * @s: the value of the string
 *
 * Return: lenght of strlen
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
