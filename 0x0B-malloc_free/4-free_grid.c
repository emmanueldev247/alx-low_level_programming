#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function to backup 2D grid
 * @grid: grid to be backed up
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	if ((grid != NULL) && (height != 0))
	{
		for (height = height; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
