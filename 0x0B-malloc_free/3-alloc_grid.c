#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int **row_p;
	int *column_p;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	row_p = grid;
	for (i = 0; i < height; i++)
	{
		*row_p = malloc(sizeof(int) * width);
		if (*row_p == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(*(grid + j));
			}
			free(grid);
			return (NULL);
		}
		row_p++;
	}
	row_p = grid;
	for (i = 0; i < height; i++)
	{
		column_p = *row_p;
		for (j = 0; j < width; j++)
			*(column_p + j) = 0;
		row_p++;
	}
	return (grid);
}
