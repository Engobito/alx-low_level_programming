#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 *
 * Return: Alawys 0 (Success)
*/
int main(void)
{
	int x = 1;

	while (x < 16)
	{
	printf("%x", x);
	x = x + 1;
	}
	putchar('\n');
	return (0);
}
