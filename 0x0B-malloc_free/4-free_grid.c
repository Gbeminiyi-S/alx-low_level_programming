#include "main.h"

/**
 * free_grid - frees a 2 dimensional array of integers
 * @height: number of elements
 * @grid: double pointer to array
 */
void free_grid(int **grid, int height)
{
	if (grid)
	{
		while (height > 0)
		{
			free(grid[height - 1]);
			height--;
		}
		free(grid);
	}
}

