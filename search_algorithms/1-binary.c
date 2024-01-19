#include "search_algos.h"
/**
* binary_search - Function that searches for a value in a sorted array
*				of integers using the Binary search algorithm
*
* @array: This is a pointer to the firt element of the array to search in
* @size: This is a number of elements in array
* @value: This is a value to search for
*
* Return: the index where value is located otherwise
*		-1 if value is not present in array or if array is NULL
*		otherwise Return value of index
*/
int binary_search(int *array, size_t size, int value)
{
	size_t index_array = 0, left_array = 0, right_array = 0, middle_array = 0;

	right_array = size - 1;

	if (array == NULL)
		return (-1);

	while (left_array <= right_array)
	{
		middle_array = left_array + (right_array - left_array) / 2;

		printf("Searching in array: ");

		for (index_array = left_array; index_array <= right_array; index_array++)
		{
			printf("%d", array[index_array]);
			if (index_array < right_array)
				printf(", ");
		}
		printf("\n");

		if (array[middle_array] == value)
			return (middle_array);

		if (array[middle_array] < value)
			left_array = middle_array + 1;
		else
			right_array = middle_array - 1;
	}
	return (-1);
}
