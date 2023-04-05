#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: pointer to first element in the linked list
 *
 * Return: data inside the deleted elements,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, node;

	if (head == NULL || *head == NULL)
		return (0);

	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
