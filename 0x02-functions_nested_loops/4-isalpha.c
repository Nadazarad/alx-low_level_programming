#include "main.h"

/**
 * _isalpha - checks for alphabetic character whether in upper or lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if c is a letter,
 *         otherwise returns 0(success)
*/

int _isalpha(int c)
{
	if (c >=65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

