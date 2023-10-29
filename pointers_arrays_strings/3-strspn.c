#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 *
 * @s: This is a string
 * @accept: This is a string
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *	 of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;
	int j = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		i++;

	}

	return (count);
}
