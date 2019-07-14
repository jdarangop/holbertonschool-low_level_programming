#include <stdio.h>
#include <stdlib.h>

/**
  * main - Print the acumulated sum..
  * @argc: Number of parameters passed.
  * @argv: Values passed.
  * Return: 0 when it's fine and 1 when doesn't..
  */
int main(int argc, char *argv[])
{
	int i, count = 0;

	if (argc < 3)
	{
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		else if (*argv[1] > 'a' && *argv[1] < 'z')
		{
			/**
			  *num1 = atoi(argv[1]);
			 */
			printf("Error\n");
			return (1);
		}
		else
		{
			/**
			  *num1 = atoi(argv[1]);
			  *printf("%d\n", num1);
			  */
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > 'a' && *argv[i] < 'z')
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
		return (0);
	}
}
