#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print the elements on an array.
 *
 * @a: Array.
 * @n: number.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != n - 1)
		{
			printf(", ");
		}
		else
		{
			putchar('\n');
		}
	}
}
