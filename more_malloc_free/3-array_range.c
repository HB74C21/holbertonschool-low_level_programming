#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers.
 *
 * @min: This is integer
 * @max: This is integer
 *
 * Return: The pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
