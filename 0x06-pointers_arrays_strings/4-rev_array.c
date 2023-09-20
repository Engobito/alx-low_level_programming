#include "main.h"
#include <string.h>

/**
 * reverse_array - the function that strcat two arrays
 *
 * @a: the string one
 * @n:  the string 2
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
