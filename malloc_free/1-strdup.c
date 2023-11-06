#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Function that returns a pointer to a newly allocated space
 *		in memory, which containts a copy of the string
 * @str: This is a string
 *
 * Return: A pointer to the duplicated string or NULL if insufficient memory
*/
char *_strdup(char *str)
{
	char *array;

	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	array = malloc(sizeof(char) * (i + 1));

	if (array == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		array[j] = str[j];

	array[j] = '\0';

	return (array);
}
