#include "lists.h"

/**
  * get_nodeint_at_index - Get a node in a respetive index.
  * @head: Head of the linked list.
  * @index: Index of the node.
  * Return: The node in that index.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int counter;

	current = head;
	for (counter = 0; counter != index && current != NULL;
			current = current->next, counter++)
	{
		;
	}

	if (current)
		return (current);
	else
		return (NULL);
}

/**
  * delete_nodeint_at_index - Delete a node in a respective index.
  * @head: Linked list.
  * @index: Index.
  * Return: 1 if work, -1 if doesn't.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_prev, *current;

	if (head == NULL)
		return (-1);

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}

	node_prev = get_nodeint_at_index(*head, index - 1);
	if (node_prev == NULL)
		return (-1);

	current = node_prev->next;
	node_prev->next = node_prev->next->next;
	free(current);
	return (1);
}
