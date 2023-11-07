#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Function that concatenates two strings
 *
 * @s1: This is the first string
 * @s2: This is the second string
 *
 * Return: The pointer with the two string or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	char *array;

	int i = 0;
	int j = 0;
	int lenght = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	array = malloc(sizeof(char) * (i + j + 1));

	if (array == NULL)
		return (NULL);

	for (lenght = 0; s1[lenght] != '\0'; lenght++)
		array[lenght] = s1[lenght];

	for (j = 0; s2[j] != '\0'; j++, lenght++)
		array[lenght] = s2[j];

	array[lenght] = '\0';

	return (array);

}
