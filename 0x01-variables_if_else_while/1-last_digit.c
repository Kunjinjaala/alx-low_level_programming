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
	int LD;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	LD = n % 10;

	/* your code goes there */

	if (LD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LD);
	}
	else if (LD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LD);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LD);
	}
	return (0);
}
