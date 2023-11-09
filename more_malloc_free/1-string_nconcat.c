#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Function that concatenates two strings.
 *
 * @s1: First string
 * @s2: Second String
 * @n: This is unsigned integer
 *
 * Return: Pointer with the newly allocated space in memory
 *	or NULL it the function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n;
	unsigned int index = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] != '\0'; index++)
		len++;

	concat = malloc(sizeof(char) * len + 1);

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index] != '\0'; index++)
	{
		concat[len] = s1[index];
		len++;
	}

	for (index = 0; s2[index] != '\0' && index < n; index++)
	{
		concat[len] = s2[index];
		len++;
	}

	concat[len] = '\0';

	return (concat);
}
