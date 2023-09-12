#include "main.h"

/**
 * print_sign:  print + if n is greater than zero, 0 if n is zero and - if n is less than zero
 *
 * @c: check the input
 *
 * Return: returns 1 if +
 *         returns 0 if  0
 *         returns -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
        	return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
         	return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
        	return (-1);
	}
}
