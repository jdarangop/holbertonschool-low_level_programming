#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Print the acumulated sum..
  * @argc: Number of parameters passed.
  * @argv: Values passed.
  * Return: 0 when it's fine and 1 when doesn't..
  */
int main(int argc, char *argv[])
{
	int i, count = 0, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		count += atoi(argv[i]);
	}
	printf("%d\n", count);
	return (count);
}
