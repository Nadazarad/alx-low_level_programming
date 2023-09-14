#include "main.h"

/**
 * print_diagonal - function to print a diagonal
 *
 * @n: number of times \ should be printed
*/

void print_diagonal(int n)
{
	int dia;

	if (n == 0)
		_putchar('\n');
	else
	{
		for (dia = 1; dia <= n; dia++)
			_putchar(' ');
		_putchar('\');
		_putchar('\n');
	}
}
