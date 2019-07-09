#include "holberton.h"
#include <stdio.h>

/**
  * print_diagsums - Prints the sum of the two diagonals.
  * @a: Matrix.
  * @size: Size of the Matrix.
  * Return: void.
  */

void print_diagsums(int *a, int size)
{
	int i, j = 0, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += *(a + i + j);
		diag2 += *(a - i + j + size - 1);
		j += size;
	}
	printf("%d, %d\n", diag1, diag2);
}
