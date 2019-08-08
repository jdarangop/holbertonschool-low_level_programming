#include "holberton.h"

/**
  * flip_bits  - Count how much bits there is between two numbers.
  * @n: Decimal number 1.
  * @m: Decimal number 2.
  * Return: Number of bits between the two numbers.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	while (n > 0 || m > 0)
	{
		if (((n ^ m) & 1) == 1)
			counter++;

		n >>= 1;
		m >>= 1;
	}
	return (counter);
}
