#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: Variable to check
 *
 * Return: 1 for uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
