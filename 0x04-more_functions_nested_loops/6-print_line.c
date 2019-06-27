#include "holberton.h"

/**
 * print_line - Print a line, depending the characters of n.
 *
 * @n: A number.
 *
 * Return: void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
