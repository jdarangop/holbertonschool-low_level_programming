#include "lists.h"

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}
	return (sum);
}
