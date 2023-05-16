#include <stdlib.h>
#include "main.h"
/**
 * free_grid-free 2D array
 * @grid:dimention of the array
 * @height:col of the array
 * Return:void
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
