#include "holberton.h"


/**
 *_strlen - Get the len.
 * @s: string.
 * Return: len of array.
 */
int _strlen(char *s)
{
	int contador = 0;

	while (*(s + contador) != '\0')
	{
		contador++;
	}
	return (contador);
}

/**
  * _strcmp - Like strcmp.
  * @s1: string.
  * @s2: string.
  * Return: nothing.
  */
int _strcmp(char *s1, char *s2)
{
	int size1 = _strlen(s1);
	int size2 = _strlen(s2);

	if (size1 > size2)
	{
		return (*s1 - *s2);
	}
	else if (size1 == size2)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (*s1 - *s2);
	}
}


