#include "main.h"

/**
 * main - print numbers 1 - 100 
 *        numbers divisble by 3 print Fizz
 *        numbers divisble by 5 print Buzz
 *        numbers divisble by 3 & 5 print FizzBuzz
 *
 * retun: Always 0 (sucess)
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0)
		printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");
		else if (n % 3 == 0 && (n % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
