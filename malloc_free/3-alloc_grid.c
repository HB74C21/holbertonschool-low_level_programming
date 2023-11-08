#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional array
 *		of integers.
 *
 * @width: This is first integer
 * @height: This is a second integer
 *
 * Return: if width or height is 0 or negative, return NULL or
 *	The function should return NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * width);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(sizeof(int) * height);

		if (array[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	}

	return (array);
}
