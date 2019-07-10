#include "holberton.h"

/**
 * _strlen_recursion - Find the lenght of a string.
 * @s: String.
 * Return: The lenght of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
