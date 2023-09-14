#include "main.h"

/**
 * print_diagonal -  print a diagonal
 *
 * @n: number of times \ should be printed
*/

void print_diagonal(int n)
{
	int dia, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dia = 1; dia <= n; dia++)
		{
			for (space = 1; space <= dia; space++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
}
