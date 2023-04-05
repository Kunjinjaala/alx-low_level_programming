#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to pointer to first node of list
 *
 * Description: This function frees a listint_t list 
 * and sets the head pointer to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *new_node, *next;

	if (head == NULL)
		return;

	new_node = *head;

	while(new_node != NULL)
	{
		next = new_node->next;
		free(new_node);
		new_node = next;
	}

	*head = NULL;
}
