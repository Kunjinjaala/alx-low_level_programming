#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 *
 * @head: head of the list
 *
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int add;

	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
		
	}

	return (add);
}
