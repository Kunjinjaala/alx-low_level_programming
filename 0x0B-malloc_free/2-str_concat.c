#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 *
 * @s1: input one to concat
 *
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
(
	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";
	
	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);

	char *conct = (char *)malloc(len_s1 + len_s2 + 1);

	if (conct == NULL)
		return (NULL);
	
	strcpy(result, s1);
	strcat(result, s2);

	return result;
}

int main()
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    
    char *concatenated = str_concat(s1, s2);
    
    if (concatenated != NULL)
    {
        printf("Concatenated string: %s\n", concatenated);
        free(concatenated);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
