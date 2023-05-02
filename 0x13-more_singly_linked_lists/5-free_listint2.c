#include "lists.h"

/**
 * free_listint2 - Frees linked list
 * @head: Pointer to list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}

	*head = NULL;
}
