#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid.
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 * Return: always return 0
 */

void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
