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
	int a = 'a', z = 'z';

	while (a <= z)
	{
	putchar(a);
	a = a + z;
	}
	putchar('\n');
	return (0);
}

