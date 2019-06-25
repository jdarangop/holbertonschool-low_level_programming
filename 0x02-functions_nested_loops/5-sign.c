#include "holberton.h"

/**
 * print_sign - Determine when n is greater, lower or equal to 0
 *
 * @n: An integer.
 *
 * Return: 1 when n > 0, 0 when n is 0 and -1 when n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
