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


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_prev, *new_node, *node_next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	node_prev = get_nodeint_at_index(*head, idx - 1);
	node_prev->next = new_node;
	node_next = get_nodeint_at_index(*head, idx);
	new_node->next = node_next;
	return (new_node);
}
