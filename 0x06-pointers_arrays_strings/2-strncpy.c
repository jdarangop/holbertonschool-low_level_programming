#include "holberton.h"

/**
  * _strncpy - Like strncpy.
  * @dest: string.
  * @n: the number of elements to swap.
  * @src: string.
  * Return: nothing.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

