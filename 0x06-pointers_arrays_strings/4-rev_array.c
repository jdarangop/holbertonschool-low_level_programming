#include "holberton.h"

/**
  * reverse_array - Reverse the array.
  * @a: an array of integers
  * @n: the number of elements to swap
  *
  * Return: nothing.
  */
void reverse_array(int *a, int n)
{
	int array[1024];
	int i, z;
	int j = n - 1;

	for (i = 0; i <= n; i++)
	{
		array[i] = a[j];
		j--;
	}

	for (z = 0; z < n; z++)
	{
		a[z] = array[z];
	}
}
