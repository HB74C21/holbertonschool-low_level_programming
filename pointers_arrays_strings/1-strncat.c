#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 *
 * @s: This is a string
 *
 * Return: The value
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}

/**
 * _strncat - Function that concatenates two strings
 *
 * @dest: This is a string
 * @src: This is a string
 * @n: This is a integer
 *
 * Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[j + i] = src[i];

	dest[j + i] = '\0';

	return (dest);
}
