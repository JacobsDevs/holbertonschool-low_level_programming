#include <stdlib.h>

/**
 * free_grid - Frees a 2d grid
 * @grid: pointer to the pointer of the first row of the grid
 * @height: Height of the 2d grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
