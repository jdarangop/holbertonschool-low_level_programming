#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Create a 2D array.
 * @width: Width of the array.
 * @height: Height of the array.
 * Return: 2D array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	int **tmp = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		tmp[i] = (int *)malloc(width * sizeof(int));
	}

	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				tmp[i][j] = 0;
			}
		}
	}

	return (tmp);
}
