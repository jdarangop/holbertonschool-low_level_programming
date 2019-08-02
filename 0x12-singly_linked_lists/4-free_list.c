#include "lists.h"

/**
  * free_list - Clean the list.
  * @head: The list.
  * Return: void.
  */

void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}

}

