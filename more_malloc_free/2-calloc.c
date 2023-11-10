#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: This is a unsigned integer
 * @size: This is a unsigned integer
 *
 * Return: NULL If nmemb or size is 0, then _calloc or Returns a pointer to the
 *		allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;

	if (nmemb == 0 && size == 0)
		return (NULL);

	array = malloc(sizeof(char) * (nmemb * size));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
