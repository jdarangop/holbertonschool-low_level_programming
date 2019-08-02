#include "lists.h"

/**
  * free_list - Clean the list.
  * @head: The list.
  * Return: void.
  */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;
		free(head->str);
		free(head);
		head = current->next;
	}

}

