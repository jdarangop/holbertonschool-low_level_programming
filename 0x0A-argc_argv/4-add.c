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
	int i, count = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			count += atoi(argv[i]);
		}
	}
	printf("%d\n", count);
	return (count);
}
