#include "holberton.h"

/**
  * print_times_table - Print the multiply table until a number passed.
  * @n: Maximmum number to multiply.
  * Return: void.
  */
void print_times_table(int n)
{
	int i, j, multiplication;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			multiplication = i * j;
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				continue;
			}
			_putchar(' ');
			if (multiplication < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multiplication + '0');
			}
			else if (multiplication > 99)
			{
				_putchar(multiplication / 100 + '0');
				_putchar((multiplication % 100) / 10 + '0');
				_putchar((multiplication % 100) % 10 + '0');
			}
			else if (multiplication <= 99 && multiplication >= 10)
			{
				_putchar(' ');
				_putchar(multiplication / 10 + '0');
				_putchar(multiplication % 10 + '0');
			}
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
