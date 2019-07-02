#include "holberton.h"

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
