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
	int i, j, t;
	int **tmp;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	tmp = (int **)malloc(sizeof(int *) * height);

	if (tmp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		tmp[i] = (int *)malloc(width * sizeof(int));

		if (tmp[i] == NULL)
		{
			for (t = i; t >= 0; t--)
			{
				free(tmp[t]);
			}
			free(tmp);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tmp[i][j] = 0;
		}
	}

	return (tmp);
}
