#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @index: the index, starting from 0.
 *
 * @n: input number
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	while (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
