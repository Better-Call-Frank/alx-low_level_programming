#include "lists.h"

/**
 * add_nodeint_end - Adds node at end of linked list
 * @head: Pointer to first element in the linked list
 * @n: Data to insert in new element
 *
 * Return: Pointer to new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;
	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
