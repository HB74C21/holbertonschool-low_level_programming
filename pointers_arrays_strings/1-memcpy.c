#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 *
 * @dest: This is a character
 * @src: This is a character
 * @n: This is a intager
 *
 * Return: The a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
