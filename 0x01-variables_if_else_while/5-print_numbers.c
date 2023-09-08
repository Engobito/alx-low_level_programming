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
	int x = 0;

	while (x < 10)
	{
	printf("%d", x);
	x = x + 1;
	}
	printf("\n");
	return (0);
}
