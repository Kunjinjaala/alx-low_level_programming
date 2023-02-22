#include "main.h"

/**
 * _isalpha - check the code for alphabetic characters.
 *
 *@c: the number to be checked.
 *
 * Return: 1 on success and 0 on anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
