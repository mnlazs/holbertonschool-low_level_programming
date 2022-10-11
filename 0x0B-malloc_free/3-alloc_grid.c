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
	if (width <=0 || height <=0)
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
	 	grid [i] = calloc(wight, *sizeof(int *));

		if (grid[i]=NULL)
		{
			for (j = 0; j<i; j++)
			{
			free (grid [j]);
			}	
			free (grid);
			return NULL;
		}
	}
	return grid;

}

