#include <stdio.h>

/**
  * main - Print the sum of the first 32 fibonacci numbers.
  *
  * Return: Always 0;
  */
int main(void)
{
	unsigned long int i, j, sum = 0;

	for (i = 1, j = 2; (i <= 4000000) && (j <= 4000000); i += j, j += i)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}

		if (j % 2 == 0)
		{
			sum += j;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
