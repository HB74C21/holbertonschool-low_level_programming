#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in
 *         the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int lenght = 0;
	int count = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[lenght] != '\0')
	{
		if (b[lenght] != '0' && b[lenght] != '1')
			return (0);

		lenght++;
	}

	for (count = 0; count < lenght; count++)
	{
		result = result << 1;
		result = result | (b[count] - '0');
	}

	return (result);
}
