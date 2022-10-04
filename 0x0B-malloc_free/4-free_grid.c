#include "main.h"

/**
 * free_grid - frees a 2d grid
 * @grid: The grid to free
 * @height: the height of the grid to free
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
