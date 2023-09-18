#include <stdio.h>
#include "main.h"

/**
 * swap_int - the function that swap the value of to integer
 *
 * @a: the pointer 1
 * @b: the pointer 2
 */

void swap_int(int *a, int *b)
{
	int z = *a;

	*a = *b;
	*b = z;
}
