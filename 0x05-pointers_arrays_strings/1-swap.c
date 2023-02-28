#include "main.h"

/**
 * swap_int - Swap to integers
 *
 * @a: Integer to swap
 *
 * @b: Integer to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
