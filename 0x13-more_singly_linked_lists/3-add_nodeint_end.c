#include "lists.h"

/**
  * add_nodeint_end - Add a new node at the end of the list.
  * @head: Linked list.
  * @n: The number.
  * Return: The new node.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *current;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	current = *head;
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while(current->next != NULL)
	{
		current = current->next;
	}

	current->next = newnode;
	return (newnode);
}
