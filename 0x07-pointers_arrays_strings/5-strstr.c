#include "holberton.h"

/**
  * _strstr - Write a function that locates a substring.
  * @haystack: String.
  * @needle: Substring.
  * Return: String.
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, z = 0;
	char *pointer;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		z = i;
		j = 0;
		while (haystack[z] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				pointer = &haystack[i];
				return (pointer);
			}
			z++;
			j++;
		}
		i++;
	}
	return ('\0');
}
