#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	if (str == NULL || !(strcmp(str, "")))
	{
		return (NULL);
	}

	if (strcmp(str, " "))
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

