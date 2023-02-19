#include <stdio.h>

/**
 * main - Print alphabets
 *
 * in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/* Print the alphabets in lowecase */

	while (lowercase <= 'z')
	{
	putchar(lowercase);
	lowercase++;
	}
	/* Print the alphabet in uppercase */

	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}

	/* Print a new line */

	putchar('\n');
	return (0);
}
