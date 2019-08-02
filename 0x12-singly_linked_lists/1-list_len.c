#include "lists.h"
#include <stdio.h>

/**
  * list_len - Find the lenght of the list.
  * @h: Linked list.
  * Return: Lenght of list.
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
