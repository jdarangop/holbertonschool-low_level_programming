#include "lists.h"

size_t listint_len(const listint_t *h)
{
	unsigned int count;

	for (count = 0; h != NULL; h = h->next)
	{
		count++;
	}

	return (count);
}
