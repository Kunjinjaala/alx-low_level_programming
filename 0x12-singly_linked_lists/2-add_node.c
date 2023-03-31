#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the head of the list.
 *
 * @str: string to be duplicated and added to the list.
 *
 * Return: address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *str_copy;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
	free(new);
	return (NULL);
	}

	new->str = str_copy;
	new->len = strlen(str_copy);
	new->next = *head;
	*head = new;

	return (new);
}
