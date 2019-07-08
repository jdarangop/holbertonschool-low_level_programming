#include "holberton.h"

void print_number(int n)
{
	int num;
	int i = 1000000;

	if (n > 0)
	{

		while (n / i == 0)
		{
			i /= 10;
		}

		_putchar(n / i + '0');

		while ( i != 1)
		{
			num = (n % i) / (i / 10);
			_putchar(num + '0');
			i /= 10;
		}
	}
	else if ( n < 0)
	{
		n *= -1;
		while (n / i == 0)
		{
			i /= 10;
		}
		_putchar('-');
		_putchar(n / i + '0');

		while ( i != 1)
		{
			num = (n % i) / (i / 10);
			_putchar(num + '0');
			i /= 10;
		}
	}
	else
	{
		_putchar(n + '0');
	}
}
