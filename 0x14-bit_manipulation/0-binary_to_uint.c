#include "holberton.h"

/**
  * _strlen - Return the len of a string.
  * @s: The string.
  * Return: Lenght of a string.
  */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * binary_to_uint - Convert a number from binary to decimal.
  * @b: Binary number.
  * Return: Number converted, or 0 if is no specified.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i = 0;
	int len;

	if (b == NULL)
		return (0);

	len = _strlen(b) - 1;

	while (b[len])
	{
		if (b[len] == '0')
		{
			sum += (0 << i);
		}
		else if (b[len] == '1')
		{
			sum += (1 << i);
		}
		else
		{
			return (0);
		}
		len--;
		i++;
	}
	return (sum);
}
