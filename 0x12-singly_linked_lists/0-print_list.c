#include "lists.h"
#include <stdio.h>

/**
  * print_list - Print the linked list.
  * @h: Linked list.
  * Return: Number of nodes.
  */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	unsigned int count = 0;


	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			count++;
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}

	return (count);
}
