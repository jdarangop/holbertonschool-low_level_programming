#include <stdio.h>

/**
 * main - Return the largest prime number..
 *
 * Return: Always 0.
 */
int main(void)
{
	long numero = 612852475143;
	int i = 2;
	int tmp = 0;

	while (numero != 1)
	{
		if (numero % i == 0)
		{
			if (i > tmp)
			{
				tmp = i;
			}
			numero = numero / i;
		}
		i++;
	}
	printf("%d\n", tmp);
	return (0);
}
