#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a pointer to a 2-dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to a 2 dimensional array of ints
 */
int **alloc_grid(int width, int height)
{
	int **array, x, y;
	int par = width * height;

	if (par <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		array[x] = (int *)malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(array[x]);
			free(array);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			array[x][y] = 0;

	return (array);
}

