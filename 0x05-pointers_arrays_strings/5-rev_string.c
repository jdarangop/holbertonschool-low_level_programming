#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rev_string(char *s)
{
	int i = 0, j, contador;
	int size = malloc(strlen(s));
	int array[size];

	while (*(s + i) != '\0')
	{
		array[i] = *(s + i);
		i++;
	}	

	for (j = 0; j <= i; j++)
	{
		*(s + j) = array[contador];
		contador--;
	}

}
