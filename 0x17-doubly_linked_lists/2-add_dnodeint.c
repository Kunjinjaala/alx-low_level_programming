#include "lists.h"

/**
 * dlistint_t *add_dnodeint - adds a new node at 
 * the beginning of a list
 *
 * @h: head of the list
 *
 * Return: address  of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	
	new_node = malloc(sizeof(dlistint_t));

	while (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
