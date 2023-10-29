#include "main.h"
/**
 * _strncpy - Function that copies a string
 *
 * @dest: This is a string
 * @src: This is a string
 * @n: This is an integer
 *
 * Return: The copies of a string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}


	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
