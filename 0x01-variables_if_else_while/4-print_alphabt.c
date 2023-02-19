#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';

	/* Print lowercase alphabet without 'q' and 'e' */

	while (lowercase <= 'z')
	{
	if (lowercase != 'q' && lowercase != 'e')
	{
	putchar(lowercase);
	}
	lowercase++;
	}

	/* Print newline character */

	putchar('\n');

	return (0);
}

