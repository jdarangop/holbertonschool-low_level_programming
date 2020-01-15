#include "search_algos.h"
#include <math.h>

/**
 * linear_search - Search a value with a linear algorithm
 * @array: Array to search.
 * @size: Size of the array to search.
 * @value: Value to search.
 *
 * Return: The index or -1 if it's not found
 */

int jump_search(int *array, size_t size, int value)
{
	int i, step = sqrt(size), j;

	for (i = 0; i < (int)size; i += step)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i - step, i);
			for (j = i - step; j <= i; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}
