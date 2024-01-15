#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @**h: pointer to the head of the list
 *
 * @idx: index of the position to insert the new node
 *
 * @n: data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int count;



	if (idx > 0 && *h == NULL)
		return (NULL);
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0 || *h == NULL)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return new_node;
	}

	current = *h;
	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}

	if (count < idx)
	{
		free(new_node);
		return (NULL);
	}
	
	new_node->prev = current->prev;
	new_node->next = current;
	current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}
