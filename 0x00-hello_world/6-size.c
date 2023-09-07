#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program to print size of various types.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
	printf("Size of a long long int:%lu bytes\n", sizeof(long long int));
	printf("Size of a float:%lu bytes\n", sizeof(float));
	return (0);
}
