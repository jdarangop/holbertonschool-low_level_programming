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
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
