#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters
 *		of a string to uppercase
 *
 * @str: This is a character
 *
 * Return: The letters uppercase
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}

	return (str);
}
