#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function to create 2D grid of numbers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to the created grid
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}
