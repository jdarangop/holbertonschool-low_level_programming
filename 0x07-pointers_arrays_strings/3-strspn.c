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
	int i, j, count = 0, flag;

	for (i = 0; accept[i] != 0; i++)
	{
		flag = 0;
		for (j = 0; s[j] != 0; j++)
		{
			if (accept[i] == s[j] && flag == 0)
			{
				count += 1;
				flag = 1;
			}
		}
	}

	if (accept[i] == s[j])
	{
		count += 1;
	}
	return (count);
}
