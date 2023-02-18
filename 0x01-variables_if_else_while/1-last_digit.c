#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int LastDigit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	LastDigit = n % 10;

	/* your code goes there */

	if (LastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
	}
	else if (LastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
	}
	return (0);
}
