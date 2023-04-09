#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: input
 *
 * Return: the binary number
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i, new;

	new = 0;
	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			new++;
		}
		else if (new)
			_putchar('0');
	}
	if (new == '\0')
		_putchar('0');
}

