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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5){
		printf("Last digit of %d\n and is greater than 5\n", n);
	}else if (n <0){
		printf("Last digit of %d\n and  is zero\n", n);
	}else{
		printf("Last digit of %d\n is less than 6 and not 0", n)
	}
	return (0);
}
