#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @src: a string input
 * @dest: a string input
 *
 * return: pointer to string dest
*/

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}


