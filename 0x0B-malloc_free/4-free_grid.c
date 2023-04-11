#include "main.h"
/**
* free_grid - frees the grid created before
* @grid : the grid
* @height: the height of the grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		/*free each row*/

		free(grid[i]);

	}

	/*free array of row pointers*/
	free(grid);
}
