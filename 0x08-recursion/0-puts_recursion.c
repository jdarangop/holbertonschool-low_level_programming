#include "holberton.h"

/**
 * _puts_recursion - Print a string.
 * @s: String
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
