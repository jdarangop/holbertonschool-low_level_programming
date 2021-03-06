#include "holberton.h"

/**
 * puts_half - Print a half of the string.
 * @str: String.
 * Return: void.
 */
void puts_half(char *str)
{
	int i, j;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (j = i / 2; *(str + j) != '\0'; j++)
		{
			_putchar(*(str + j));
		}
	}
	else
	{
		for (j = i / 2 + 1; *(str + j) != '\0'; j++)
		{
			_putchar(*(str + j));
		}
	}
	_putchar('\n');
}
