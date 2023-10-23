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
