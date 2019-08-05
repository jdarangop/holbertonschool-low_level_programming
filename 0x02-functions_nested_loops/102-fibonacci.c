#include <stdio.h>

/**
  * main - Print the first 50 fibonacci numbers.
  *
  * Return: Always 0;
  */
int main(void)
{
	int count;
	unsigned long int i, j;

	for (i = 1, j = 2, count = 2; count < 51; i += j, j += i, count += 2)
	{
		printf("%lu, ", i);
		if (count == 50)
			printf("%lu\n", j);
		else
			printf("%lu, ", j);
	}
	return (0);
}
