#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Delete a 2D array.
 * @grid: Array.
 * @height: Height of the array.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
