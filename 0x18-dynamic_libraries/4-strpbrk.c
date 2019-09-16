#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - Write a function that searches a string.
 * @s: String to substract.
 * @accept: Substring.
 * Return: The lenght.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, flag = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				flag = 1;
				break;
			}
		}

		if (flag)
		{
			break;
		}
	}

	if (flag)
	{
		return (s + i);
	}
	else
	{
		return (0);
	}
}
