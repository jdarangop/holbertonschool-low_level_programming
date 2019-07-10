#include "holberton.h"

/**
 * factorial - Find the factorial to a number.
 * @n: Integer number.
 * Return: The answer.
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
