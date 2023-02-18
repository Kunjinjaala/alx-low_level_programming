#include <stdio.h>

/**
 * main - Print Alphabets
 *
 * Return: (0)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
