#include "main.h"

/**
 * reset_to_98 - pointer to an int points to value 98
 *
 * @n: integer input
 *
 * return: Always 0 (success)
*/

void reset_to_98(int *n);
{
	int n;

	n = 98;
	int *p = &n;

	printf("%d\n", p);

	return (0);
}
