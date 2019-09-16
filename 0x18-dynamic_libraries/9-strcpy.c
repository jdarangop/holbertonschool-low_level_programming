#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - Print the same string.
 * @dest: array;
 * @src: string;.
 *
 * Return: The array.
 */
char *_strcpy(char *dest, char *src)
{
	int j, i = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}

	dest[j + 1] = '\0';
	return (dest);
}
