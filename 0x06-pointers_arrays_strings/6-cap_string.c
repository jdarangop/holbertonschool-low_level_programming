#include "holberton.h"

/**
 * cap_string - Make some letters capital.
 * @str: String.
 * Return: String upper.
 */
char *cap_string(char *str)
{
	int i, num = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32 || str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}' ||
				str[i] == '\t' || str[i] == '\n')
		{
			num = 1;
		}

		else if (str[i] >= 'a' && str[i] <= 'z' && num == 1)
		{
			str[i] -= 32;
			num = 0;
		}
		else
		{
			num = 0;
		}
	}

	return (str);
}
