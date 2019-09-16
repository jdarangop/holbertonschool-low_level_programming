#include "holberton.h"


/**
  * _strcat - Like the function strcat
  * @dest: string.
  * @src: string.
  *
  * Return: nothing.
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int size = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[size + i] = src[i];
	}
	dest[size + i] = '\0';

	return (dest);

}

