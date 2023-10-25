#include "main.h"
/**
 * _strcmp - Write a function that compares two strings
 *
 * @s1: This is a first string
 * @s2: This is a second string
 *
 * Return: 0, if the s1 and s2 are equal a negative value if s1 is less than s1
 *		a positive value if s1 is greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
	int lenght;
	int value = 0;

	for (lenght = 0; s1[lenght] != '\0'; lenght++)
	{
		if (s1[lenght] != s2[lenght])
		{
			value = s1[lenght] - s2[lenght];

			return (value);
		}

	}
	return (0);
}
