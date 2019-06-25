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
	int i = n % 10;

	if (n < 0)
	{
		_putchar(-1 * i + '0');
		return (-1 * i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}
