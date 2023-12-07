#include "main.h"
/**
 * _atoi - Function that convert a string to an integer.
 *
 * @s: this is a string
 *
 * Return: A integer
*/
int _atoi(char *s)
{
	int count_index_s;
	int result = 0;
	int sign = 1;

	for (count_index_s = 0; s[count_index_s] != '\0'; count_index_s++)
	{
		if (s[count_index_s] == '-')
			sign *= -1;

		if (s[count_index_s] >= '0' && s[count_index_s] <= '9')
		{
			result = result * 10 + sign * (s[count_index_s] - '0');

			if (s[count_index_s + 1] < '0' || s[count_index_s + 1] > '9')
				break;
		}
	}

	return (result);
}
