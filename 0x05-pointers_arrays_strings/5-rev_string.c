#include "holberton.h"

/**
 * rev_string - Prints the string reversed.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	char array[1024];
	int i = 0, j, count = 0;

	while (*(s + i) != '\0')
	{
		array[i] = *(s + i);
		i++;
	}


	for (j = (i - 1); j >= 0; j--)
	{
		*(s + j) = array[count];
		count++;
	}

}

