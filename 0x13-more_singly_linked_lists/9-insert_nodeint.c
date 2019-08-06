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
  * insert_nodeint_at_index - Insert a node in a respective index.
  * @head: Linked list.
  * @idx: Index.
  * @n: Data into the list.
  * Return: Lenght new linked list.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_prev, *new_node;

	if (head == NULL)
		return (NULL);

	if (*head == NULL && idx == 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	node_prev = get_nodeint_at_index(*head, idx - 1);
	new_node->next = node_prev->next;
	node_prev->next = new_node;
	return (*head);
}
