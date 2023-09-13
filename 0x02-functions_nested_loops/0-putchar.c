#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Alawys 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
	_putchar(char str[i]);
	}
	_putchar('\n');
	return (0);
}
