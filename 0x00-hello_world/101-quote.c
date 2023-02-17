#include <stdio.h>
#include <stdlib.h>
/**
 * Main - entry point
 * Return: always 1 (success)
 **/
int main(void)
{
	write(STDOU_FILENO, "and that piece of art is useful\" - Dora Korpar 2015-10-19,\n",59);
	return (1);
}
