#include "holberton.h"

/**
 * print_square - Print square depending of size.
 *
 * @size: Size of the square.
 *
 * Return: void.
 *
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size == 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
