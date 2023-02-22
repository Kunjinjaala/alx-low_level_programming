#include <unistd.h>

/**
 * _putchar writes the character c to stdout
 * return: 1 on success
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
