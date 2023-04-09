#include "main.h"

/**
 * flip_bits -  returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @m: input number.
 *
 * @n: input number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int add = 0;

	while (diff != 0)
	{
	add++;
	diff &= (diff - 1);
	}
	return (add);
}
