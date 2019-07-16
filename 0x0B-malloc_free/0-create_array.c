#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - Create an array respect to size and character.
  * @size: Size of the array.
  * @c: Character to inicialized.
  * Return: Temporal array (tmp).
  */
char *create_array(unsigned int size, char c)
{
	char *tmp;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(char) * size);
	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			tmp[i] = c;
		}

		return (tmp);
	}
}
