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
	for (counter = 0; counter != index; current = current->next, counter++)
	{
		;
	}

	if (current)
		return (current);
	else
		return (NULL);
}
