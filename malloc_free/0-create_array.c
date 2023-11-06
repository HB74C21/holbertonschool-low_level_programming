#include <stdlib.h>
#include "main.h"
/**
 * create_array - Function that creates an array of chars,
 *		and initializes it with a specific char
 * @size: This is a unsigned Integer
 * @c: This is a character
 *
 * Return: A pointer to the array or Null if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
