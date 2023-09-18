#include "main.h"

/**
 * print_array - the function that prints n elements
 *
 * @a: the element
 * @n: the number of the element
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
