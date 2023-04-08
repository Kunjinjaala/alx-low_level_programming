#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;

	if (*b == '\0')
		return (0);

	
	for (; *b != '\0'; b++)
	{
		if (*b == '0')
			dec_num = (dec_num << 1) | 0;

		else if (*b == '1')
			dec_num = (dec_num << 1) | 1;

		else
			return (0);
	}
	return (dec_num);
}
