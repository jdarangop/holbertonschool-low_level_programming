#include "holberton.h"

/**
 * print_triangle - square depending of size.
 *
 * @size: Size of the triangle..
 *
 * Return: void.
 *
 */
void print_triangle(int size)
{
	int i;
	int j;
	int contador = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= contador)
			{
				_putchar(35);
			}
			else
			{
				_putchar(32);
			}
		}
		contador--;
		_putchar('\n');
	}
}
