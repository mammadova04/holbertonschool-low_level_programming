#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - frees mallocs
 * @grid: matrix
 * @height: height
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i <= height; i++)
			free(grid[i]);
		free(grid);
	}
}
