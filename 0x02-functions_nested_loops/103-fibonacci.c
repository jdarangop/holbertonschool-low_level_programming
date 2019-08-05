#include <stdio.h>

/**
  * main - Print the sum of the first 32 fibonacci numbers.
  *
  * Return: Always 0;
  */
int main(void)
{
	int count;
	unsigned long int i, j, sum = 0;

	for (i = 1, j = 2, count = 1; count < 32; i += j, j += i, count+=2)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		else if(j % 2 == 0)
		{	
			sum += i;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
