#include <stdio.h>
#include <stdlib.h>

/**
  * main - Print the minimum number of money for change.
  * @argc: Number of parameters passed.
  * @argv: Values passed.
  * Return: Minimum number of money for change.
  */
int main(int argc, char *argv[])
{
	int num, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("%d\n", count);
		return (count);
	}

	count += num / 25;
	num = num % 25;
	count += num / 10;
	num = num % 10;
	count += num / 5;
	num = num % 5;
	count += num / 2;
	num = num % 2;
	count += num;

	printf("%d\n", count);
	return (count);
}
