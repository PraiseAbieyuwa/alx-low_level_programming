#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - functions that returns a pointer to a 2 dimensional array
 * @width: integer
 * @height: integer
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **temp;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	temp = malloc(height * sizeof(int *));
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		temp[i] = malloc(width * sizeof(int));
		if (temp[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(temp[i]);
			free(temp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			temp[i][j] = 0;
	}

	return (temp);
}
