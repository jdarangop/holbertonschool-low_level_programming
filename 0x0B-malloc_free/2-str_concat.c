#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s)
{
	int count = 0, i;
	
	while(s[i])
	{
		count++;
		i++;
	}

	return (count);
}

char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int count1 = _strlen(s1);
	int count2 = _strlen(s2);
	int i, j;

	if ((s1 == NULL) || (s2 == NULL))
	{
		return ("");
	}

	tmp = malloc((sizeof(char)*count1) + (sizeof(char)*count2) - 1);

	if (tmp != NULL)
	{
		for (i = 0; i < count1; i++)
		{
			tmp[i] = s1[i];
		}
		for (j = i; j < i + count2; j++)
		{
			tmp[j] = s2[j];
		}
		tmp[j] = '\0';
		return (tmp);
	}
	else
	{
		return (NULL);
	}
}
