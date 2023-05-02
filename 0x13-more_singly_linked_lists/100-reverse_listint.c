#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to a pointer to the first node in the list
 *
 * Return: Pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *next;

	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
	return (*head);
}
