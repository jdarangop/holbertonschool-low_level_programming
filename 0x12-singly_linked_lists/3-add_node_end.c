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

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *newnode;

	newnode = malloc(sizeof(list_t));
	current = *head;
	
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	
	if (*head == NULL)
	{
		*head = newnode;
		return (NULL);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	
	current->next = newnode;
	
	return (newnode);
}
