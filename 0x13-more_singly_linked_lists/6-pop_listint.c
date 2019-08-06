#include "lists.h"

/**
  * pop_listint - Deletes the head node and return its data.
  * @head: Linked list.
  * Return: Data of the head node.
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (num);
}

