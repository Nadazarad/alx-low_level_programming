#include "main.h"

/**
 * print_rev - prints reversed string, folowed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
