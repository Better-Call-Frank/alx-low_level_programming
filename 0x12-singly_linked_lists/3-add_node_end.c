#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds new node at end of linked list
 * @head: Double pointer to the list_t list
 * @str: New string to put in the new node
 * Return: Address of new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		last = last->next;
		last->next = new;
	}

	return (new);
}
