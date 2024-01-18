#include "search_algos.h"
/**
* linear_search - Function that searches for a value in an array of integers
*               using the Linear shearch algotithm
* @array: Thus us a pointer to the first element of the array to search in
* @size: This is a number elements in array
* @value: This is a value to search for
*
* Return: -1 if value is not present in array or if array is NULL
*		otherwise Return value of index
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
	}

	return (-1);
}
