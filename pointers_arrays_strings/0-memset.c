#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: This is a character
 * @b: This is a character
 * @n: This is an unsigned integer
 *
 * Return: A pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
