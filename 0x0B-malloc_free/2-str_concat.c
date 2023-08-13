#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two input strings.
 *
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, ab;

	while (s1 == NULL)
		s1 = "";

	while (s2 == NULL)
		s2 = "";

	a = ab = 0;

	while (s1[a] != '\0')
		a++;

	while (s2[ab] != '\0')
        	ab++;

	conct = (char *)malloc(sizeof(char) * (a + ab + 1));

	if (conct == NULL)
        	return (NULL);

	int i;
	for (i = 0; i < a; i++)
        	conct[i] = s1[i];

	int j;
	for (j = 0; j < ab; j++)
		conct[a + j] = s2[j];

	conct[a + ab] = '\0';

	return (conct);
}
