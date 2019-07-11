#include "holberton.h"

/**
 * funcion - check the code for Holberton School students.
 * @i: Integer, counter.
 * @b: Integer, root base.
 * Return: Integer.
 */
int funcion(int i, int b)
{
	int tmp = 0;

	if (i * i == b)
	{
		return (i);
	}
	else if (i * i < b)
	{
		tmp = funcion(i + 1, b);
	}
	else
	{
		return (-1);
	}
	return (tmp);
}


/**
 * _sqrt_recursion - Find the square root.
 * @n: Integer, number to find.
 * Return: Answer, integer.
 */
int _sqrt_recursion(int n)
{
	return (funcion(0, n));
}


