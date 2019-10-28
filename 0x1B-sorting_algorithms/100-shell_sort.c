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
	int gap, j, tmp, z;
	size_t i, k = 1;
	/*int gaps[500];*/

	if (size < 2)
		return;

	gap = 1;
	for (z = 1; z < ((int)size / 3) - 1; z++)
	{
		gap = 3 * gap + 1;
	}

	while (gap)
	{
		/*gap = gaps[k];*/
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
		gap = (gap - 1) / 3;
	}
}
