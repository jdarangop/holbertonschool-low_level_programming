#include "holberton.h"

/**
  * _strchr - Write a function that locates a character in a string.
  * @s: String.
  * @c: Character.
  * Return: String.
  */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}

