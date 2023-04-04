#include "lists.h"

/**
 * *add_nodeint - adds a new node at the begining of listint list
 *
 * @n: input data
 *
 * @head: pointer to the first node in the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	while (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
