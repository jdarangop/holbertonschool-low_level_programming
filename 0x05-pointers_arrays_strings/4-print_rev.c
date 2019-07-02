#include "holberton.h"

/**
   * print_rev - Prints a string reversed.
   * @s: The string to be reversed.
   */
void print_rev(char *s)
{
	int i, j;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
