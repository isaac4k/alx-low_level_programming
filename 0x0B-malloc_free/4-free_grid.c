#include "main.h"
#include "stdlib.h"
/**
 * free_grid - free a block of memory
 * @grid: a pointer to the grid
 * @height: the heigth of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (height > 1000000)
		return;
	free(grid);
}
