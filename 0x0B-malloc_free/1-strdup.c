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
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(str));
	
	if (tmp != NULL)
	{

		for (i = 0; i <= sizeof(str); i++)
		{
			tmp[i] = str[i];
		}

		return (tmp);
	}
	else
	{
		return (NULL);
	}
}

