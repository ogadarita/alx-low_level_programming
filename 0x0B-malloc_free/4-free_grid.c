#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - function that frees memory allocated for 2D grid
* @grid: the grid
* @height: columns
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; ++i)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
