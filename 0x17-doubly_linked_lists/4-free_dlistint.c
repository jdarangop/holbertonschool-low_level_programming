#include "lists.h"

/**
 * free_dlistint - Free a list.
 * @head: Head of the list.
 * Return: Node added.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;
	next = head->next;
	while (head != NULL)
	{
		free(head);
		head = next;
		if (head != NULL)
			next = next->next;
	}
}
