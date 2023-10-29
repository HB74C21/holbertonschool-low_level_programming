#include "main.h"
/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 *
 * @s: This is a string
 * @accept: This is a string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *	or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}

		i++;
	}

	return ('\0');
}
