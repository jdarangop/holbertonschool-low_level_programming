#include "holberton.h"

/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
