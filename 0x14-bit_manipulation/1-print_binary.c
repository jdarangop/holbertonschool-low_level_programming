#include "holberton.h"

/**
  * print_binary  - Print a decimal as a binary.
  * @n: Decimal number.
  * Return: Number converted.
  */

void print_binary(unsigned long int n)
{
	/*unsigned int mask = 32768;*/
	unsigned long int mask = 4611686018427387904;
	/*unsigned long int mask = 1 << 63;*/
	int flag = 0, counter = 0;

	if (n == 0)
		_putchar('0');

	while (mask > 0)
	{
		if (counter == 64)
			_putchar('0');

		if ((n & mask) == 0)
		{
			if (flag == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			flag = 1;
		}
		mask = mask >> 1;
		counter++;
	}
}
