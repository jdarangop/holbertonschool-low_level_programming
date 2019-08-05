#include "lists.h"

/**
  * free_listint - Clean the list.
  * @head: The list.
  * Return: void.
  */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
