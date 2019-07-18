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

/**
 * strtow - Extract all the words from an string.
 * @str: String.
 *
 * Return: Array of words.
 */
char **strtow(char *str)
{
	if (str == NULL || !(_strcmp(str, "")))
	{
		return (NULL);
	}

	if (_strcmp(str, " "))
	{
		return (NULL);
	}

	tmp = malloc(sizeof(int *) * words(str));
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			pos = i;
			flag = 1;
			count++;
		}
		else if (flag == 1)
		{
			tmp[j] = malloc(sizeof(char) * (count + 1));
		}
	}


	return (NULL);
}

