#include "main.h"

/**
 * get_endianness - checks endianess.
 *
 * Return: 0 for big, 1 for little.
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return (*ptr);
}
