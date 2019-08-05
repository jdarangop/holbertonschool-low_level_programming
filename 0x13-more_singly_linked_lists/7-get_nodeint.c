#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int counter;

	current = head;
	for (counter = 0; counter != index; current = current->next, counter++)
	{
		;
	}

	if (current)
		return (current);
	else
		return (NULL);
}
