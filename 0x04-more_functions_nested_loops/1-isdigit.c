#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 *
 * @c: input digit
 *
 * Return: returns 1 if its a digit , otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
