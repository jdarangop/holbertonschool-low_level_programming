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
	int i, j, diag1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j += size)
		{

			diag1 += 1;
			printf("%d ", *(a + j - i));
		}
	}
	printf("resultado: %d \n", diag1);
}
