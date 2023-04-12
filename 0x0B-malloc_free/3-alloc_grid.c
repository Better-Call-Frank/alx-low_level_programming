#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers and initializes to 0
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(sizeof(int *) * height);

    if (grid == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);

        if (grid[i] == NULL)
        {
            for (j = i - 1; j >= 0; j--)
                free(grid[j]);

            free(grid);
            return (NULL);
        }

        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}
