#include "lists.h"

/**
 * print_dlistint - Print all the elements in the list.
 * @h: head of the list.
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
