#include "main.h"
/**
 * _strlen_recursion - Function that return the length of a string
 *
 * @s: This is a string
 *
 * Return: The lenght of a string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
		return (1 + _strlen_recursion(s + 1));
}
