#include "function_pointers.h"
/**
 * int_index - Function that searches for a integer
 *
 * @array: This is a pointer of array
 * @size: This is a size of array
 * @cmp: This is a pointer of function
 *
 * Return: value of int or -1 if no element matches or -1 if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != '\0')
			return (i);
	}
	return (-1);
}
