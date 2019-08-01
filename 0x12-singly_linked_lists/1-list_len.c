#include "lists.h"
#include <stdio.h>

/**
  * print_list - Print the linked list.
  * @h: Linked list.
  * Return: Number of nodes.
  */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	unsigned int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
