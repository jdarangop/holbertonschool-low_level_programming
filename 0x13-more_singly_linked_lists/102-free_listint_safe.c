#include "lists.h"

/**
  * free_listint_safe - Clean the list.
  * @h: The list.
  * Return: the size of the list.
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	unsigned int counter = 0;
	void *addr_prev, *addr_actual;

	if (h == NULL)
		return (0);

	addr_prev = (void *)h;
	while (*h)
	{
		addr_actual = (void *)h;
		if (addr_actual > addr_prev)
		{
			return (counter);
		}
		current = (*h)->next;
		(*h)->next = NULL;
		free(*h);
		*h = current;
		counter++;
	}
	h = NULL;

	return (counter);
}
