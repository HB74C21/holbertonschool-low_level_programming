#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory using malloc
 *
 * @b: This is a unsigned integer
 *
 * Return: A pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
		exit(98);

	return (array);
}
