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

	tmp = (char *)malloc(sizeof(char) * (count + 1));

	if (tmp != NULL)
	{

		for (i = 0; i < count + 1; i++)
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

