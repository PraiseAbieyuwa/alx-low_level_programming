#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid created
 * @grid: pointer to array
 * @height: integer
 */

void free_grid(int **grid, int height)
{
	int lo;

	if (grid == NULL)
		free(grid);

	for (lo = 0; lo < height; lo++)
		free(grid[lo]);

	free(grid);
}
