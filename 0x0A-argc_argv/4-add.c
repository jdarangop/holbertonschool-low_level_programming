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
	int i, num1, count = 0;

	if (argc < 3)
	{
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		else if ((*argv[1] >= 0 && *argv[1] <= 47) || (*argv[1] >= 58))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num1 = atoi(argv[1]);
			printf("%d\n", num1);
			return (0);
		}
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 0 && *argv[i] <= 47) || (*argv[i] >= 58))
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
