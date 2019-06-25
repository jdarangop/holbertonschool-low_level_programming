#include "holberton.h"

/**
 * print_last_digit - Print the last digit of n.
 *
 * @n: A number.
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	int i;
	int a;

	if (n < 0)
	{
		a = -n;
	}
	else
	{
		a = n;
	}
	i = a % 10;
	_putchar(i + '0');
	return (i);
}
