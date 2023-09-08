#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lower case
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
