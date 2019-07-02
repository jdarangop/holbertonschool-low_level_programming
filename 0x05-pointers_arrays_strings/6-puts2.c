#include "holberton.h"

/**
 * puts2 - Print only pars numbers from a string.
 *
 * @str: String with the numbers.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i, j;

	while (*(str + j) != '\0')
	{
		j++;
	}

	for (i = 0; i <= j - 1; i++)
	{
		if (*(str + i) % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
