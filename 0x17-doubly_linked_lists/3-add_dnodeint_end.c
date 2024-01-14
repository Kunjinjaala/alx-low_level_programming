#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - adds a new node at 
 * the end of a list
 *
 * @h: head of the list
 *
 * Return: address  of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *end_node;
	
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	end_node = *head;
	while (end_node->next != NULL)
		end_node = end_node->next;

	end_node->next = new_node;
	new_node->prev = end_node;

	return (new_node);
}
