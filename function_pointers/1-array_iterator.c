#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Function that executes a function given as a parameter
 *		on each element of a array
 *
 * @array: This is a pointer of array
 * @size: This is a size of array
 * @action: This is a pointer of function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
