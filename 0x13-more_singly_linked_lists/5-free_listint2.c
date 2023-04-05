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
	listint_t *node, *next;

	if (head == NULL)
		return;

	node = *head;

	while(node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}

	*head = NULL;
}
