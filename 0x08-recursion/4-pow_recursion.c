#include "holberton.h"

/**
  * _pow_recursion - Find the power between two numbers.
  * @x: Base, integer.
  * @y: Power, integer.
  * Return: Answer.
  */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
