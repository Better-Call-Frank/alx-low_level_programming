#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D integer array
 * @grid: pointer to the 2D integer array
 * @height: height of the array
 *
 * This function frees the memory of a 2D integer array created
 * with the alloc_grid function.
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
