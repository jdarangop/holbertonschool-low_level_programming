#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Find the lenght of a string.
 * @s: String.
 * Return: The lenght, integer.
 */
int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i])
	{
		count++;
		i++;
	}

	return (count);
}

/**
 * str_concat - Concat two strings.
 * @s1: String.
 * @s2: String.
 * Return: Strings concated.
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int count1 = _strlen(s1);
	int count2 = _strlen(s2);
	int i, j;

	if ((s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}

	tmp = malloc((sizeof(char) * count1) + (sizeof(char) * count2) + 1);

	if (tmp != NULL)
	{
		for (i = 0; i < count1; i++)
		{
			tmp[i] = s1[i];
		}
		for (j = 0; j < count2; j++)
		{
			tmp[i] = s2[j];
			i++;
		}
		tmp[i + 1] = '\0';
		return (tmp);
	}
	else
	{
		return (NULL);
	}
}
