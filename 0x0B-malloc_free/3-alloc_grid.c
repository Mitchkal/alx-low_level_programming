#include "main.h"
/**
* alloc_grid - returns pointer to 2D array
* @width : the width
* @height : the height
*/
int **alloc_grid(int width, int height)
{
	int **grid;

	int i = 0;
	int j = 0;

	/* checks for invalid input*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*allocate memory for array*/
	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		/*memory allocation failed*/
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

		if (grid[i] == NULL)/*memory allocation failed, so free all previous*/
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}

			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);

}
