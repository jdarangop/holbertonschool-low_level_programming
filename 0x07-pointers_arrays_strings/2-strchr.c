#include "holberton.h"

char *_strchr(char *s, char c)
{
	int i = 0, flag = 0, j = 0;
	char array[1024];

	while (s[i])
	{
		if (s[i] == c || flag == 1)
		{
			array[j] = s[i];
			flag = 1;
			j++;
		}
	}

	if (flag)
	{
		return (array);
	}
	else
	{
		return ('\0');
	}

}

