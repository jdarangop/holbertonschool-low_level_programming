#include <stdio.h>

/**
 * print_to_98 - Print the numbers from a int n to 98.
 *
 * @n: An integer.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
}
