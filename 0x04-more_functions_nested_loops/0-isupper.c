#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: the input character
 *
 * Return: 1 if uppercase, otherwise 0
*/

int _isupper(int c)
{
	for (c = 'A', c <= 'Z' , c++)
	{
		_putchar(c + 65);
		return (1);
	}
	return (0);
}
