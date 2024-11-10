#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Returns a pointer to a 2d array of ints
 * @width: x length of grid
 * @height: y length of grid
 *
 * Return: pointer to the first element of the grid or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int widthx = 0;
	int heightx = 0;
	int free = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	while (heightx < height)
	{
		grid[heightx] = malloc(sizeof(int) * width);
		if (grid[heightx] == NULL)
		{
			while (free < heightx)
				free(grid[free++]);
			return (NULL);
		}
		while (widthx < width)
		{
			grid[heightx][widthx] = 0;
			widthx++;
		}
		heightx++;
	}
	return (grid);
}
