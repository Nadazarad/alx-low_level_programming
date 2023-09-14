#include "main.h"

/**
 * print_square - prints a square using #
 *
 * @size: size of the square
*/

void print_square(int size)
{
	int len, width;

	for (len = 1; len <= size; len++)
	{
		for (width = 1; width <= size; width++)
			_putchar(35);
		_putchar('\n');
	}
}

