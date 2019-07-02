#include "holberton.h"

/**
  * _strlen - Return the len of a string.
  * @s: The string.
  * Return: Lenght of a string.
  */
int _strlen(char *s)
{
	int contador, i = 0;

	while (*(s + i) != '\0')
	{
		contador++;
		i++;
	}
	return (contador);
}
