#include "lists.h"

/**
  * find_listint_loop - Find a loop node.
  * @head: The list.
  * Return: The loop node.
  */

listint_t *find_listint_loop(listint_t *head)
{

	if (head == NULL)
		return (NULL);


	while (head)
	{
		if (head->next >= head && head->next != NULL)
			return (head->next);

		head = head->next;
	}
	return (NULL);
}
