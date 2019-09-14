#include "lists.h"

/**
 * sum_dlistint - Sum all the elements in the list.
 * @head: Head of the list.
 * Return: Sum of the elements in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int counter = 0;

	while (head != NULL)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}
