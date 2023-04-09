#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @index: the index, starting from 0.
 *
 * @n: input number
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	while (index >= sizeof(unsigned long int) * 8)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
