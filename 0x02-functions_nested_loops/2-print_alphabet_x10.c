#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet from a to z, 10 times.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
