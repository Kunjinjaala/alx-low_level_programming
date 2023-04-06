#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to the list
 *
 * @index: the index of the node that hould be deleted
 *
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (-1);
	}

	if (node == NULL)
		*head = temp->next;
	else
		node->next = temp->next;

	free(temp);

	return (1);
}
