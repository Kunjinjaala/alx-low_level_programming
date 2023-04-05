#include "lists.h"

/**
 * sum_listint - Returns the sum of all data (n) in a listint_t linked list.
 *
 * @head: Pointer to the head node of the list.
 *
 * Return: Sum of all data (n) in the list, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return sum;
}
