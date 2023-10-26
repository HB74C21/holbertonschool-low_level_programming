#include "main.h"
/**
 * leet - Function that encodes a string into 1337
 *
 * @str: This is a string
 *
 * Return: The string
*/
char *leet(char *str)
{
	int i;
	int count;

	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (count = 0; count <= 9; count++)
		{
			if (str[i] == letter[count])
			{
				str[i] = number[count];
			}
		}
	}
	return (str);
}
