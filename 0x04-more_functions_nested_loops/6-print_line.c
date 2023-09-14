#include "main.h"

/**
 * print_line - function draws line in the terminal
 *
 * Return: Always 0 (success)
*/

void print_line(int n)
{
	int ln;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
			_putchar('_');
		_putchar('\n');
	}
}
