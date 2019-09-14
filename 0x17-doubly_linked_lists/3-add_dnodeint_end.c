#include "lists.h"

/**
 * add_dnodeint_end - Append a new node in the end of the list.
 * @head: Head of the list.
 * @n: Element into the node.
 * Return: Node added.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (current == NULL)
	{
		new_node->prev = current;
		current = new_node;
		*head = current;
		return (*head);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
