#include "main.h"

/**
 * _puts - Prints a string
 *
 * @str: String
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
