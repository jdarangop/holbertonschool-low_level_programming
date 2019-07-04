#include "holberton.h"

/**
  * leet - Encoding on leet.
  * @s: String.
  * Return: String enconded..
  */
char *leet(char *s)
{
	char array[5][2] = {{'a', 'A'}, {'e', 'E'},
		{'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
	char keys[5] = {'4', '3', '0', '7', '1'};

	int i = 0, j;

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (array[j][0] == s[i] || array[j][1] == s[i])
			s[i] = keys[j];
		}
		i++;
	}
	return (s);
}
