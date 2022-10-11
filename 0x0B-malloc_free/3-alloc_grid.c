#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - prototype
 * @i: variable
 * @j: variable
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return NULL;
	}
	int i,j;
	
	int **grid =malloc(height *sizeof(int *));

	if (grid == NULL)

	{
		return NULL;
	}
	

	for (i=0; i<height; i++)
        {
                grid[i] =malloc(width *sizeof(int));

        }
        for (i=0; i<height; i++)
        {
                for (j=0; j<width;j++)
                {
                        grid[i][j]= 0;
                }
        }
        return (grid);
}

