#include <stdio.h>

/**
  * main - Print the first 98 fibonacci numbers.
  *
  * Return: Always 0;
  */
int main(void)
{
	int count;
	unsigned long int i, j, tmp1, tmp2;

	for (i = 1, j = 2, count = 2; count < 99; i += j, j += i, count += 2)
	{
		if (i > 1000000000000000)
		{
			tmp1 = i / 1000000000;
			tmp2 = i % 1000000000;
			if (tmp2 / 100000000 == 0)
			{
				tmp1 *= 10;
			}
			if (count != 98)
				printf("%lu%lu, ", tmp1, tmp2);
		}
		else
		{
			printf("%lu, ", i);
		}


		if (j > 1000000000000000)
		{
			tmp1 = j / 1000000000;
			tmp2 = j % 1000000000;
			if (tmp2 / 100000000 == 0)
			{
				tmp1 *= 10;
			}
			if (count == 98)
				printf("%lu%lu\n", tmp1, tmp2);
			else
				printf("%lu%lu, ", tmp1, tmp2);
		}
		else
		{
			printf("%lu, ", j);
		}
	}
	return (0);
}
