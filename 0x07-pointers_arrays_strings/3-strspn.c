#include "holberton.h"

/**
  * _strspn - Find the lenght of a prefix substring.
  * @s: String to substract.
  * @accept: Substring.
  * Return: The lenght.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; (s[i] == delim[i]) && (s[i] != '\0' && delim[i] != '\0'); i++)
	{
		;
	}
	return (i);
}
