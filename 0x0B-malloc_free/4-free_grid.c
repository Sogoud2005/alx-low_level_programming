#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - a
 * @grid: a
 * @height: a
 * Return: none
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);

}
