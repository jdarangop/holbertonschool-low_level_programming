#include <stdio.h>
#include <stdlib.h>


/**
 *_strdup - pointer to a newly allocated space in memory.
 * @str: String.
 * Return: temporal array (tmp).
 */
char *_strdup(char *str)
{
	char *tmp;
	unsigned int i, count = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j])
	{
		count++;
		j++;
	}

	tmp = malloc(sizeof(char)*count);
	
	if (tmp != NULL)
	{

		for (i = 0; i <= count; i++)
		{
			tmp[i] = str[i];
		}
		tmp[i] = '\0';

		return (tmp);
	}
	else
	{
		return (NULL);
	}
}

