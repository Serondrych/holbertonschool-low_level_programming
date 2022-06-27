#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional array previously created
* @grid: grid
* @height: rows
* Return: ponter to 2D array, NULL on failure
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
