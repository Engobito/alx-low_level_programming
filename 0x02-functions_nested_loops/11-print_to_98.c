#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - write numbers to 98
 *
 * @n: the number i start
*/
void print_to_98(int n)
{
	int count;

	if (n < 98)
	{
		for (count = n; count < 98; count++)
		{
		printf("%d, ", count);
		}
	}
	if (n > 98)
	{
		for (count = n; count > 98; count--)
		{
		printf("%d, ", count);
		}
	}
	printf("98\n");
}
