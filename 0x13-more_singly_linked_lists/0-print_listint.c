#include "lists.h"

/**
 * print_listint - prints all elements of the listin_t list
 *
 * @h: pointer to head of the list
 *
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
