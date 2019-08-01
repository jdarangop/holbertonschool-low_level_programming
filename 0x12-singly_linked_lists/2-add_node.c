#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * _strlen - Return the len of a string.
  * @s: The string.
  * Return: Lenght of a string.
  */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

list_t *add_node(list_t **head, const char *str)
{
	list_t * node;
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
