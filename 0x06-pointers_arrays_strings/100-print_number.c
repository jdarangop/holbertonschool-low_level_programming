#include "holberton.h"

/**
 * print_number - Print a number like a string.
 * @n: Number.
 * Return: void.
 */
void print_number(int n)
{
	int num;
	unsigned int m;
	int i = 1000000000;

	if (n > 0)
	{
		while (n / i == 0)
		{
			i /= 10;
		}
		_putchar(n / i + '0');
		while (i != 1)
		{
			num = (n % i) / (i / 10);
			_putchar(num + '0');
			i /= 10;
		}
	}
	else if (n < 0)
	{
		m = -1*n;
		while (m / i == 0)
		{
			i /= 10;
		}
		_putchar('-');
		_putchar(m / i + '0');
		while (i != 1)
		{
			num = (m % i) / (i / 10);
			_putchar(num + '0');
			i /= 10;
		}
	}
	else
	{
		_putchar(n + '0');
	}
}
