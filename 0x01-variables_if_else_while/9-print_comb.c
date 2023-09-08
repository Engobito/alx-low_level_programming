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
	int a = 48;

	while (a < 58)
	{
	putchar(a);
	putchar(',');
	putchar(' ');
	a = a + 1;
	}
	putchar('\n');
	return (0);
}
