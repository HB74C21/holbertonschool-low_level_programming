#include "main.h"
/**
 * _strcpy - Function that copies the string pointed to by src, including the
 *		terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: this is a character
 * @src: this is a string
 *
 * Return: The value the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
