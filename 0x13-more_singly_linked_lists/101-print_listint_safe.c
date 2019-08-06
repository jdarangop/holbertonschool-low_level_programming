#include "lists.h"

/**
  * print_listint_safe - Print the linked list.
  * @head: Linked list.
  * Return: Number of nodes.
  */

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	void *addr_prev, *addr_actual;

	addr_prev = (void *)head;
	while (head != NULL)
	{
		addr_actual = (void *)head;
		if (addr_actual > addr_prev)
		{
			printf("-> [%p] %d\n", addr_actual, head->n);
			exit(98);
		}

		printf("[%p] %d\n", addr_actual, head->n);
		head = head->next;
		addr_prev = addr_actual;
		count++;
	}

	return (count);
}
