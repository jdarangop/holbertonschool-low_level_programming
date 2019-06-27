#include "holberton.h"

/**
 * _isdigit - determine when a is a digit.
 *
 * @c: A character..
 *
 * Return: 1 when is a digit and 0 when it doesn't..
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
