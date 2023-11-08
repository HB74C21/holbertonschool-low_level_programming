#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function that frees a 2 dimmensional grid
 *
 * @grid: This is a integer
 * @height: This is a integer
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
