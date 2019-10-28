#include "sort.h"

/**
 * shell_sort -  Sorts integers using Shell sort algorithm.
 * @array: List of data
 * @size: Size of the array
 *
 * Return: Always 0
 */

void shell_sort(int *array, size_t size)
{
	int gap, j, tmp, gap_p = 1, z;
	size_t i, k = 1;
	int gaps[500];

	if (size < 2)
		return;

	for (z = ((int)size / 3) - 1; z >= 0; z--)
	{
		gaps[z] = gap_p;
		gap_p = 3 * gap_p + 1;
	}

	while (k < size / 3)
	{
		gap = gaps[k];
		/*gap = pow((float)3, (float)k) - 1;*/
		/*gap = gap / 2;*/
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = tmp;
		}
		print_array(array, size);
		k++;
	}
}
