#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: an arrau of integer
 * @n: number of elements
 *
 * return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, j, y;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		y = a[i];
		a[i] = a[j];
		a[j] = y;
	}
}
