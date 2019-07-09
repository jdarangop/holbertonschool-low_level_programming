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
	int i, j, flag;
	unsigned int count = 0;

	flag = 0;
	for (i = 0; accept[i] != 0; i++)
	{
		for (j = 0; s[j] != 0; j++)
		{
			if (s[j - 1] == accept[i - 1])
			{
				count += 1;
				flag = 1;
				break;
			}
		}
	}

	if (flag == 1)
	{
		count += 1;
	}

	return (count);
}
