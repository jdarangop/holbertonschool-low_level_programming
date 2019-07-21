#include <stdio.h>
#include <stdlib.h>

/**
 * _strcmp - Like strcmp.
 * @s1: string.
 * @s2: string.
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;


	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/**
  * _strlen - Find the lenght of a string.
  * @s: String.
  * Return: The lenght, integer.
  */
int _strlen(char *s, int i)
{
	int count = 0;

	while (s[i] != ' ')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * words - Count the numbers of words.
 * @str: String.
 *
 * Return: Number of words.
 */
int words(char *str)
{
	int count = 0, flag = 0;

	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			flag = 1;
		}
		else if (flag == 1)
		{
			count++;
			flag = 0;
		}
		str++;
	}
	return (count);
}

char *_strcpy(char *s, int i, char *tmp)
{
	int j;

	for (j = 0; s[i] != ' '; i++, j++)
	{
		tmp[j] = s[i];
	}
	tmp[j] = '\0';

	return (tmp);
}

/**
 * strtow - Extract all the words from an string.
 * @str: String.
 *
 * Return: Array of words.
 */
char **strtow(char *str)
{

	int i = 0, j = 0, pos;
	char **tmp;
	
	if (str == NULL || !(_strcmp(str, "")) || (words(str) == 0))
	{
		return (NULL);
	}

	if ((tmp = malloc(sizeof(int *) * (words(str) + 1))) == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		if (str[i] != ' ')
		{
			pos = _strlen(str, i);
			tmp[j] = malloc(sizeof(char) * (pos + 1));
			_strcpy(str, i, tmp[j]);
			j++;
			i += pos;
		}
		else
		{
			i++;
		}
	}

	tmp[j] = NULL;
	return (tmp);
}

