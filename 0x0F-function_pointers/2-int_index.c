#include <stdio.h>

/**
  * int_index - Searches for an integer.
  * @array: Array.
  * @size: Size of array.
  * @cmp: Function.
  * Return: -1 when no works, and the indice when works.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return;
	}


	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
