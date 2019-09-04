#include "holberton.h"
#include <stdio.h>

/**
  * _strspn - Find the lenght of a prefix substring.
  * @s: String to substract.
  * @accept: Substring.
  * Return: The lenght.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i = 0, j = 0;

	if (accept == NULL || s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		j = 0;
		while (accept != '\0')
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (counter);
			j++;
		}
		i++;
	}
	return (i);
}
