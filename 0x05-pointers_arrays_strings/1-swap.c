#include "main.h"

/**
 * swap_int - swap the value of int *a
 *                 the value of int *b
 *
 * @a: integer parameter 1
 * @b: integer parameter 2
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

