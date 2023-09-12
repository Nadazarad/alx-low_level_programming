#include "main.h"

/**
 * int _islower(int c),return 1 if c is lowercase
 *
 * @c: check input of function
 *
 * Return: returns 1 if 'c' is lowercase
 *         otherawise always 0 (success)
*/

int _islower(int c)
{
	if(c >= 97 && c <= 122)
		return 1;
	return (0);
}
