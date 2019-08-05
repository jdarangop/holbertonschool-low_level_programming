#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head == NULL)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (num);
}

