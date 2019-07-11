#include "holberton.h"

/**
 * function - Temporal function.
 * @i: Integer, counter.
 * @b: Integer, number.
 * Return: Integer.
 */
int function(int i, int b)
{
	if (b < 2)
	{
		return (0);
	}

	if (i < b)
	{
		if (b % i == 0)
		{
			return (0);
		}
		else
		{
			return (function(i + 1, b));
		}
	}
	return (1);
}

/**
 * is_prime_number - Find if is a prime number..
 * @n: Integer, number to find.
 * Return: Answer, integer.
 */
int is_prime_number(int n)
{
	return (function(2, n));
}
