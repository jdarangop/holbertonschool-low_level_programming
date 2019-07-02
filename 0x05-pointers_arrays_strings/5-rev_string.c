#include "holberton.h"

/**
 * rev_string - Prints the string reversed.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	char array[1024];
	int i = 0, j, count;

	while (*(s + i) != '\0')
	{
		array[i] = *(s + i);
		i++;
	}

	count = i;

	for (j = 0; j <= i + 1; j++)
	{
		count--;
		*(s + j) = array[count];
	}

}

