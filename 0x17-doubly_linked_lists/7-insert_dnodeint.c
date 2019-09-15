#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node in a index of the list.
 * @h: Head of the list.
 * @idx: Index.
 * @n: Element.
 * Return: New node inserted in the list.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *node, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	current = *h;
	if (idx == 0)
	{
		node = add_dnodeint(&*h, n);
		free(new_node);
		return (node);
	}
	else if (*h == NULL)
		return (NULL);
	for (i = 0; i < idx && current != NULL; i++, current = current->next)
	{
		;
	}
	if (current == NULL)
	{
		if (i == idx)
		{
			node = add_dnodeint_end(&*h, n);
			free(new_node);
			return (node);
		}
		else
			return (NULL);
	}
	else
	{
		new_node->next = current;
		new_node->prev = current->prev;
		(current->prev)->next = new_node;
		current->prev = new_node;
		return (new_node);
	}
}
