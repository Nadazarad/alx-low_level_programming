#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @c: check the input
 *
 * Return: returns 1 if n is greater than zero
 *         returns 0 if n is zero
 *         returns -1 if n less than zero
*/

int print_sign(int n)
{
	if (n > 0)
		_putchar(n + '43');
	return (1);
	else if (n = 0)
		_putchar(n + '48');
	return (0);
	else if (n < 0)
		_putchar(n + '45');
	return (-1);
}
