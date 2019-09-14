#include "lists.h"

/**
 * dlistint_len - Count the elements in the list.
 * @h: head of the list.
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
