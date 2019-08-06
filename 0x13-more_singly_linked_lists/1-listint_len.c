#include "lists.h"

/**
  * listint_len - Print the lenght of the linked list.
  * @h: Linked list.
  * Return: Lenght of the linked list.
  */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	for (count = 0; h != NULL; h = h->next)
	{
		count++;
	}

	return (count);
}
