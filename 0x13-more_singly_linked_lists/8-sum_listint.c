#include "lists.h"

/**
  * sum_listint - Sum of the data in the nodes.
  * @head: Linked list.
  * Return: The sum of the data in the nodes.
  */

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
