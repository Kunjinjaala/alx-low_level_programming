#include "lists.h"

/**
 * print_dlistint - returns the elements in a linked list
 *
 * @h: head of the list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
	current = current->next;
	node_count++;
	}

	return (node_count);
}
