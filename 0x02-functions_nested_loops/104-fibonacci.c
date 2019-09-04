#include <stdio.h>

/**
  * main - Print the first 50 fibonacci numbers.
  *
  * Return: Always 0;
  */
int main(void)
{
	int count;
	long double i, j;

	for (i = 1, j = 2, count = 2; count < 99; i += j, j += i, count += 2)
	{
		printf("%.0Lf, ", i);
		if (count == 98)
			printf("%.0Lf\n", j);
		else
			printf("%.0Lf, ", j);
	}
	return (0);
}
