#include "lists.h"

/**
 * *add_nodeint - adds a new node at the end of listint list
 *
 * @n: input data
 *
 * @head: pointer to the first node in the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *temp;	

	new = malloc(sizeof(listint_t));
	while (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	
	return (new);
}
