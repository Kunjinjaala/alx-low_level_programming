#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - adds a new node at 
 * the end of a list
 *
 * @h: head of the list
 *
 * Return: address  of the new element
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	
	if (head == NULL)
		return;

	current = head;

	while (current != NULL)
	{
		dlistint_t *temp = current;
		current = current->next;
		free(temp);
	}
}
