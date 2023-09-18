#include "main.h"

/**
 * _strlen - gives the length of a string
 *
 * @s: string parameter
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	int counter;

	for  (counter = 0; *s != "\0" ; s++)
		++counter;

	return (counter);
}
